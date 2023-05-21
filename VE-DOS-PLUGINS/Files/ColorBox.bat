@Echo off
cls
Setlocal EnableDelayedExpansion
Title ColorBox 2.0
Set "Path=%Path%;%cd%;%cd%\files"
Color 0a
Mode 80,25

:Main
Cls
Echo.
Echo. This will print multiple colored boxes on the CMD console.
Echo.
Set _X1=2
Set /A _X2=%_X1%+5

Set _Y1=3
Set /A _Y2=%_Y1%+3

For /L %%Y in (0,1,3) do (
	For /L %%X in (0,1,9) do (
		ColorBox !_X1! !_Y1! !_X2! !_Y2! 
		Set /A _X1=!_X2!+2
		Set /A _X2+=5
	)
	Set _X1=2
	Set /A _X2=!_X1!+5

	Set /A _Y1=!_Y2!+1
	Set /A _Y2+=5
)
Echo.
Echo.
Pause >nul
Exit
