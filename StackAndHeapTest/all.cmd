@echo off
set PATH=D:\Projects\my\Ctests\MyLearnExp\mingw-w64\mingw64\bin
if %1==clean ( mingw32-make.exe clean -f Makefile )
if %1==all ( mingw32-make.exe all -f Makefile -silent )
