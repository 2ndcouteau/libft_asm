section .text
	global	ft_puts				;void ft_putstr(char *str)
	extern	ft_strlen
	extern	ft_putchar

ft_puts:
	push	rdi
	push	rsi
	push	rdx
	xor		rax, 	rax			;init rax = 0
	or		rdi,	rdi			;if (str == NULL)
	je		null				;quit
	call	ft_strlen
	mov		rdx,	rax			;la longueur de la chaîne à affichée
	mov		rsi,	rdi			;un pointeur sur le début de la chaîne
	mov		rdi,	1			;fd de sortie standar
	mov		rax, 	0x2000004	;le numéro du syscall write 0x000000 + 4
	syscall
	jc		error				;if syscall fail (as printf)
	mov		rdi, 	10
	call 	ft_putchar

exit:
	pop		rdx
	pop		rsi
	pop		rdi
	ret

null:
	mov		rdx, 	6
	mov		rsi, 	"(null)\n"
	mov		rdi,	1
	mov		rax, 	0x2000004	;print (null)
	syscall
	jnc		exit

error:
	mov		rax,	-1			;return -1
	jmp		exit