nasm -fbin -o VlaicuLoader.bin VlaicuLoader.asmm
dd if=/dev/zero of=VlaicuOS.img bs=1024 count 1440
dd if=VlaicuLoader.bin of=VlaicuOS.img seek=0 count=1 conv=notrunc