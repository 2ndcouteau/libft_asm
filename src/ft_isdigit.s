section .text
	global	ft_isdigit			;int isdigit(int c)

ft_isdigit:
	push	rdi
	cmp		rdi,	30h			;cmp with '0'
	jl		error				;if rdi < '0'
	cmp		rdi,	39h			;cmp with '9'
	jg		error				;if rdi > '9'
	pop		rdi
	mov		rax,	1			;return (1);
	ret

error:
	pop		rdi
	xor		rax,	rax			;return (0);
	ret