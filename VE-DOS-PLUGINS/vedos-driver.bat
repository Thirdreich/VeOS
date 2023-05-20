:: cmd (command)

@echo off
Set _Ver=0.1
If /i "cmd" == "/?" (goto :help)

:help
echo setcur
echo addimage
echo hitbox
echo icotext
echo setbutton
echo X and Y
echo fs
echo network
echo videocard
echo sound
echo cpu
echo powers / powerr