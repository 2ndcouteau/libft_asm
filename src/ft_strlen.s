section .text
	global	ft_strlen			;int	ft_strlen(char *str)

ft_strlen:
	push	rdi
	xor		rax,	rax			;init rax = 0
	or		rdi,	rdi			;if rdi == NULL
	je		exit				;return (0)
	xor		rcx,	rcx			;init rcx = 0; len
	not		rcx					;IMPORTANT rcx devient FFFF
	cld							;init incrementation pour deplacement dans str

count_len:
	repne	scasb				;while rdi != rax , rax-- && rdi++
	not		rcx					;Invert rcx. rcx = FFFF - rcx
	dec		rcx					;dec -> -1 for sub '\0'
	mov		rax, 	rcx			;save result in rax

exit:
	pop 	rdi
	ret							;return rax