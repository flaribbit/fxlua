@echo off
rem Do not edit! This batch file is created by CASIO fx-9860G SDK.


if exist FXLUA.G1A  del FXLUA.G1A

cd debug
if exist FXADDINror.bin  del FXADDINror.bin
"D:\CASIO\fx-9860G-SDK\OS\SH\Bin\Hmake.exe" Addin.mak
cd ..
if not exist debug\FXADDINror.bin  goto error

"D:\CASIO\fx-9860G-SDK\Tools\MakeAddinHeader363.exe" "D:\CASIO\fx-9860G-SDK\Project\fxlua\fxlua"
if not exist FXLUA.G1A  goto error
echo Build has completed.
goto end

:error
echo Build was not successful.

:end

