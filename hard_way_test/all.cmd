@echo off
PATH=C:\MinGW\bin;C:\yagarto\arm-none-eabi\bin;C:\yagarto\tools\bin;%PATH%
PATH=.;..;C:\winarm\bin;C:\winarm\arm-elf-gcc\bin;C:\winarm\utils\bin;%PATH%
if %1==clean ( make.exe clean -f Makefile )
if %1==all ( make.exe all -f Makefile -silent )
