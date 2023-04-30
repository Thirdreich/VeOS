@echo off
cls
echo Installing tools...
haxelib install flixel
haxelib install lime
haxelib run lime setup
haxelib install flixel-tools
haxelib run flixel-tools setup
echo Dont forget to install Compiler !
pause
