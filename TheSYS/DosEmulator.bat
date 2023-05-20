@echo off
cls
echo VeOS Console Version
echo type help for list commands
set /p com=
if %com% == help goto help
if %com% == gui call VeOS.bat
if %com% == close-door exit

:help
echo ----COMMANDS----
echo gui - switches to gui
echo close-door switches you to VE DOS