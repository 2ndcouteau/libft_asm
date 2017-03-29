section .text
	global ft_putchar			;void ft_putchar(char c)

ft_putchar:
	push	rdi
	mov		rsi,	rsp
	mov		rdx,	1
	mov		rdi,	1
	mov		rax, 	0x2000004
	syscall
	jc		error

exit:
	pop 	rdi
	ret

error:
	mov		rax, 	-1
	jmp		exit