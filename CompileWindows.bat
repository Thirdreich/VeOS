@echo off
echo Building Kernel...
nasm -fbin -o VlaicuLoader.bin VlaicuLoader.asm
goto finish

:finish
cls
echo The operation has been completed!
echo Start the ultra iso and create iso file
echo be sure BIN file is bootable in ultra iso 
pause