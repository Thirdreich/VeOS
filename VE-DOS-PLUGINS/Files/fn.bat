@Echo off
SetLocal EnableDelayedExpansion
cls

Title Fn.dll 2.0
Set "Path=%Path%;%cd%;%cd%\files"
Color 0a
Mode 80,25

:Main
Cls
Echo.
Call "lorem_fn.bat"
pause
