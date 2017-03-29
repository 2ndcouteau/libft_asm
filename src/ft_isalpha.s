section .text
	global ft_isalpha			;int ft_isalpha(int c)

ft_isalpha:
	push	rdi
	cmp		rdi,	41h			;cmp avec 'A'
	jl		error
	cmp		rdi,	5ah			;cmp avec 'Z'
	jg		min					;else check minuscule
	pop		rdi
	mov		rax,	1
	ret

min:
	cmp		rdi, 	61h			;cmp avec 'a'
	jl		error
	cmp		rdi, 	7ah			;cmp avec 'z'
	jg		error				;else return (0)
	pop		rdi
	mov		rax,	1
	ret

error:
	pop		rdi
	xor		rax, rax
	ret