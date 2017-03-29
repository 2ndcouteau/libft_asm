section .text
	global	ft_isalnum			;int	ft_isaslnum(int c)
	extern	ft_isalpha
	extern	ft_isdigit

ft_isalnum:
	push	rdi
	call	ft_isalpha			;if (is_alpha) rax == 1
	or		rax, rax
	jne		exit				;(is_alpha)
	call	ft_isdigit			;if (isdigit) rax == 1
	or		rax, rax
	jne		exit				;(is_digit)
	pop		rdi					;else rax == 0
	ret							;return (0)

exit:
	pop		rdi
	mov		rax, 1
	ret