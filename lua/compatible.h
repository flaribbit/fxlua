#ifndef compatible_h
#define compatible_h
#include "stdio.h"
typedef void (*__p_sig_fn_t)(int);
__p_sig_fn_t signal(int _SigNum, __p_sig_fn_t _Func);
typedef int sig_atomic_t;
struct tm {
    int tm_sec;
    int tm_min;
    int tm_hour;
    int tm_mday;
    int tm_mon;
    int tm_year;
    int tm_wday;
    int tm_yday;
    int tm_isdst;
};
typedef int time_t;
char *getenv(char *name);

#define _P_tmpdir "\\"
#define L_tmpnam (sizeof(_P_tmpdir) + 12)
#define CLOCKS_PER_SEC 1000

#define EXIT_SUCCESS 1
#define EXIT_FAILURE 0

#define SIG_DFL 0
#define SIGINT 1

#define lua_writestring(s,l) Print(s)
#define lua_writeline() Print("\n")

#endif
