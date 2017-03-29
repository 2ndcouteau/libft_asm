section .text
	global	ft_isprint		;int ft_isprint(int c)

ft_isprint:
	push    rdi
	cmp     rdi, 20h		;cmp rdi >= 0
	jl      error
	cmp     rdi, 7eh		;cmp rdi <= 0
	jg      error
	pop     rdi
	mov     rax, 1			;return (1);
	ret

error:
	pop     rdi
	xor     rax, rax		;return (0)
	ret
