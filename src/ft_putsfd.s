section .text
	global	ft_putsfd			;void	ft_puts_fd(int fd, char *str)
	extern	ft_strlen
	extern	ft_putchar

ft_putsfd:
	push	rdi
	push	rsi
	push	rdx
	or		rdi,	rdi			;if fd < 0
	jl		error				;return -1
	or		rsi, 	rsi			;if str == NULL
	jle		null				;return NULL

write:
	xor		rax, 	rax			;init rax = 0
	mov		rdx, 	rdi			;save fd
	mov		rdi, 	rsi			;mov str in rdx
	call	ft_strlen
	mov		rdi, 	rdx			;mov fd in rdx
	mov		rdx,	rax			;mov len in rdx for WRITE
	mov		rax, 	0x2000004	;syscall WRITE
	syscall
	jc		error				;if WRITE fail
	mov		rdi, 	10			;init '\n' for putchar
	call	ft_putchar

exit:
	pop		rdx
	pop		rsi
	pop		rdi
	ret

null:
	mov		rdx, 	6			;recup	len in rdx
	mov		rsi, 	"(null)\n"	;init message for WRITE
	mov		rax, 	0x2000004	;syscall WRITE
	syscall
	jnc		exit

error:
	mov		rax,	-1			;return (-1)
	jmp		exit