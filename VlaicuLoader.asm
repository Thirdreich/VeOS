section .text
use16
org 0x7c00
start:
	mov ax, cs
	mov ds, ax
	mov es, ax
	cld
	mov ax,3
	int 10h
	mov si,msg
	call vloader
	.l
	mov ax,0
	int 16h
	;al - ASCII
	cmp al,27
	jz .q
	mov ah,0x0e
	int 10h
	.q
	jmp $
vloader:
	mov ah,0x0e
	.l
	lodsb
	test al,al
	jz .q
	int 10h
	jmp .l
	.q
	ret
msg db '[INFO --> VlaicuKernel] VlaicuLoader is thinking...',10,13,0