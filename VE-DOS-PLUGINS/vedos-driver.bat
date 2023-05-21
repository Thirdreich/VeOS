:: cmd (command)

@echo off
Set _Ver=0.1
If /i "cmd" == "/?" (goto :help)
If /i "cmd" == "/powers" (goto :powers)
If /i "cmd" == "/bmp" (goto :bmp)
If /i "cmd" == "/png" (goto :png)
If /i "cmd" == "/hitbox" (goto :hitbox)
If /i "cmd" == "/cpu" (goto :vdos-cpu)
If /i "cmd" == "/videocard" (goto :videocard
If /i "cmd" == "/sound" (goto :sound))
If /i "cmd" == "/fs" (goto :fs)
If /i "cmd" == "/setcur" (goto :setcur)
If /i "cmd" == "/network" (goto :dhcp-func)
If /i "cmd" == "/getinput" (goto :getinput)

:help
echo setcur
echo hitbox
echo bmp - vedos-driver.bat /bmp /x= /y=
echo png -  vedos-driver.bat /png /x= /y=
echo icotext
echo setbutton
echo X and Y
echo fs
echo network
echo videocard
echo sound
echo cpu
echo powers

:powers
:: WORKING ON FREE DOS AND VE DOS
poweroff

:bmp

:png

:cpu

:videocard

:sound

:fs

:hitbox
@echo off
cls 

Title hitbox (bat box 2.0)
Cd Files

setlocal enabledelayedexpansion

set x_1=0
set y_1=0
set x_2=55
set y_2=50

rem delay is in mili scnd
set delay=100

set sign_x_1=+
set sign_y_1=+
set sign_x_2=-
set sign_y_2=+

set total_items=2
set item_1=namish
set item_1_len=6
set item_2=Karan
set item_2_len=5

set Columns=140
set lines=50
mode %columns%,%lines%
::call :get_size Lines Columns

set /a upper_x=%columns%-%item_1_len%
set /a upper_y=%lines%-3
set lowr_x=1
set lowr_y=1
fn.dll cursor 0

:loop
cls
for /l %%a in (1,1,!total_items!) do (
for %%A in (x y) do (
if !%%A_%%a! gtr !upper_%%A! (set sign_%%A_%%a=-)
if !%%A_%%a! lss !lowr_%%A! (set sign_%%A_%%a=+)
)
)
set item_1_limit_1=%x_1%
set /a item_1_limit_2=%x_1%+%item_1_len%
set item_2_limit_1=%x_2%
set /a item_2_limit_2=%x_2%+%item_2_len%

for /l %%x in (%item_1_limit_1%,1,%item_1_limit_2%) do for /l %%y in (!item_2_limit_1!,1,!item_2_limit_2!) do (if /i "%%x" == "%%y" (if /i "!y_1!" == "!y_2!" (set collision=true)))

if /i "!collision!" == "true" (
	for /l %%a in (1,1,%total_items%) do (
		for %%A in (x) do (
			if /i "!sign_%%A_%%a!" == "-" (set sign_%%A_%%a=+) else (set sign_%%A_%%a=-)
		)
	)
)

batbox /g !x_1! !y_1! /c 0x0a /d "!item_1!" /g !x_2! !y_2! /c 0x0c /d "!item_2!" /w !delay!
title [Item : !item_1!, Pos: x=!x_1!,y=!y_1!] [Item : !item_2!, Pos: x=!x_2!,y=!y_2!] 
set /a x_1%sign_x_1%=1
set /a y_1%sign_y_1%=1
set /a x_2%sign_x_2%=1
set /a y_2%sign_y_2%=1

set collision=false
goto loop

:get_size
mode | find "Columns">"%tmp%\c.tmp"
mode | find "Lines">"%tmp%\l.tmp"
set now=%cd%
cd /d "%tmp%" >nul
for /f "tokens=2 delims=:" %%a in (l.tmp) do (set /a %~1=%%a)
for /f "tokens=2 delims=:" %%a in (c.tmp) do (set /a %~2=%%a)
cd /d "%now%"
goto :eof

:getinput
@echo off

Title GetInput 2.0
setlocal EnableDelayedExpansion
Set path=files;%path%;
cls
color 07
for /L %%i in (1,1,5) do echo/
echo     0-Black   1-Blue  2-Green   3-Cyan   4-Red   5-Purple 6-Olive  7-White 
for /L %%i in (1,1,7) do echo/
echo     8-Gray    9-Blue  A-Green   B-Cyan   C-Red   D-Purple E-Yellow F-White 
echo                light    light    light   light     light            bright
for /L %%i in (1,1,3) do echo/

set "box1=4 3  11 7"
set "box2=4 11 11 15"
for /L %%l in (12,9,57) do (
   set /A r=%%l+9, lef=%%l+1, rig=r-1
   ColorBox %%l 2  !r! 8  194 194 193 193
   ColorBox %%l 10 !r! 16 194 194 193 193
   set "box1=!box1! !lef! 3  !rig! 7"
   set "box2=!box2! !lef! 11 !rig! 15"
)
ColorBox 3 2  12 8   218 194 193 192 & ColorBox 66 2  75 8   194 191 217 193
ColorBox 3 10 12 16  218 194 193 192 & ColorBox 66 10 75 16  194 191 217 193
set "box1=!box1! 67 3  74 7"
set "box2=!box2! 67 11 74 15"

set /P "=Select color: " < NUL
set "color= 0123456789ABCDEF"
GetInput /I "%color:~1%"  /M %box1% %box2%  /H F0 1F 2F 3F 4F 5F 6F 70 8F 9F A0 B0 CF DF E0 F0
echo !color:~%errorlevel%,1!
pause>nul
