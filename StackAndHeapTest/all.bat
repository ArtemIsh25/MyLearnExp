@echo off
PATH=D:\Projects\my\Ctests\MyLearnExp\mingw-w64\mingw64\bin;D:\Projects\my\Ctests\MyLearnExp\mingw-w64\mingw64\include;%PATH%
PATH=.;..;C:\winarm\bin;C:\winarm\arm-elf-gcc\bin;C:\winarm\utils\bin;%PATH%
if %1==clean ( make.exe clean -f Makefile )
if %1==all ( make.exe all -f Makefile -silent )
