@echo off
title Vlaicu OS Jupiter Beta
pause
echo Choose Boot Option
echo.
echo Press 1 to boot vlaicu BETA
set /p opt="VlaicuOS>>"
if %opt% == 1 goto fbb
if %opt% == 2 goto vgui
goto os

:ANTIPIR
if not exist plugs (
    start pirated_copy.bat
    exit
)

if not exist sys (
    start pirated_copy.bat
    exit
)

if not exist pirated_copy.bat (
    echo Hah dumbass
	timeout 1>nul
    exit
)

:fbb
cls
color 3f
timeout 2 >nul
echo Loading system64...
timeout 6 >nul
cls
echo Loading System
timeout 1 >nul
echo Loading Console desktop
timeout 1 >nul
goto login

:login
cls
echo VlaicuOS Jupiter Beta
echo.
echo 1 About PC
echo 2 Calculator
echo 3 time
echo 4 Close
echo 5 Vlaicu Audio
set /p cnsl="VlaicuOS>>"
if %cnsl% == 1 goto sysin
if %cnsl% == 2 goto calc
if %cnsl% == 3 goto timet
if %cnsl% == 4 exit
if %cnsl% == 5 goto spotify

:sysin
cls
systeminfo
echo if you want go to desktop press 1
set /p infpc=">"
if %infpc% == 1 goto login

:calc
cls
set /p equ=
set /a equ=%equ%
cls
echo %equ%
pause
goto login

:timet
cls
for /F "tokens=2" %%i in ('date /t') do set mydate=%%i
set mytime=%time%
echo Current time is %mydate%:%mytime%
pause
goto login

:bsod
color 9f
cls
echo FATAL ERROR 0x1 error
pause

:spotify
cd ..
spotify