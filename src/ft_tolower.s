section .text
	global ft_tolower			;int ft_tolower(int c)

ft_tolower:
	push	rdi
	cmp		rdi, 	41h			;cmp rdi >= 'A'
	jl		exit
	cmp		rdi, 	5ah			;cmp rdi <= 'Z'
	jg		exit
	add		rdi, 	20h			;then	rdi + 32

exit:
	mov		rax, rdi		 	;return (rdi)
	pop		rdi
	ret