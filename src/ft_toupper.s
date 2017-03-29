section .text
	global ft_toupper			;int	ft_toupper(int c)

ft_toupper:
	push	rdi
	cmp		rdi, 	61h			;cmp rdi >= 'a'
	jl		exit
	cmp		rdi, 	7ah			;cmp rdi <= 'z'
	jg		exit				;else return rdi
	sub		rdi,	32			;then	rdi - 32

exit:
	mov		rax,	rdi
	pop		rdi
	ret