/*****************************************************************/
/*                                                               */
/*   CASIO fx-9860G SDK Library                                  */
/*                                                               */
/*   File name : [ProjectName].c                                 */
/*                                                               */
/*   Copyright (c) 2006 CASIO COMPUTER CO., LTD.                 */
/*                                                               */
/*****************************************************************/
#include "fxlib.h"
#include "lua\lua.h"
#include "lua\lauxlib.h"


//****************************************************************************
//  AddIn_main (Sample program main function)
//
//  param   :   isAppli   : 1 = This application is launched by MAIN MENU.
//                        : 0 = This application is launched by a strip in eACT application.
//
//              OptionNum : Strip number (0~3)
//                         (This parameter is only used when isAppli parameter is 0.)
//
//  retval  :   1 = No error / 0 = Error
//
//****************************************************************************
static int lua_locate(lua_State *L)
{
    int x = luaL_checkinteger(L, 1);
    int y = luaL_checkinteger(L, 2);
    locate(x, y);
    return 0;
}

int AddIn_main(int isAppli, unsigned short OptionNum)
{
    unsigned int key;
    lua_State *L = (lua_State *)luaL_newstate();
    luaL_openlibs(L);
    lua_register(L, "locate", lua_locate);

    Bdisp_AllClr_DDVRAM();

    if(luaL_dostring(L, "local t={};for i=1,20 do local u={};for j=1,1024 do locate(1,1);print(i,j);u[j]=0; end;t[i]=u end")){
        char *err = lua_tostring(L, -1);
        int len = strlen(err);
        int i;
        for(i=0;21*i<len;i++){
            locate(1,i+2);
            Print(err+i*21);
        }
    }

    while(1){
        GetKey(&key);
    }

    return 1;
}




//****************************************************************************
//**************                                              ****************
//**************                 Notice!                      ****************
//**************                                              ****************
//**************  Please do not change the following source.  ****************
//**************                                              ****************
//****************************************************************************


#pragma section _BR_Size
unsigned long BR_Size;
#pragma section


#pragma section _TOP

//****************************************************************************
//  InitializeSystem
//
//  param   :   isAppli   : 1 = Application / 0 = eActivity
//              OptionNum : Option Number (only eActivity)
//
//  retval  :   1 = No error / 0 = Error
//
//****************************************************************************
int InitializeSystem(int isAppli, unsigned short OptionNum)
{
    return INIT_ADDIN_APPLICATION(isAppli, OptionNum);
}

#pragma section

