section .bss
	buf: resb 400h

section	.text
	global ft_cat						;void	ft_cat(int fd)

ft_cat:
	push	rdi
	lea		rsi, 	[rel buf]	;mov buf + 1 in 2nd arg for READ
	mov		rdx,	1024				;mov BUFF_SIZE for READ
	mov		rax,	0x2000003			;syscall READ
	syscall
	jc		error
	or		rax,	rax					;check if read is finish
	je		exit						;read return 0, exit

print:
	mov		rdi,	1					;fd = 1
	mov		rdx,	rax					;
	mov		rax,	0x2000004			;syscall write
	syscall
	jc		error
	pop		rdi
	jmp		ft_cat

exit:
	pop		rdi
	ret

error:
	mov		rax, 	-1
	jmp		exit