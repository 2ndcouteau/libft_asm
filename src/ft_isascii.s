section .text
	global	ft_isascii			;int ft_isascii(int c)

ft_isascii:
	push	rdi
	cmp		rdi, 0h				;cmp rdi >= 0
	jl		error
	cmp		rdi, 7fh				;cmp rdi <= 0
	jg		error
	pop		rdi
	mov		rax, 1				;return (1);
	ret

error:
	pop		rdi
	xor		rax, rax			;return (0)
	ret