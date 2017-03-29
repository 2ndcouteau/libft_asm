section .text
	global ft_strcat	;prototype de ma fonction char *ft_strcat(char *s1, const char *s2)
	extern	ft_strlen
	extern	ft_memcpy

ft_strcat:
	push	rdi
	push	rsi
	or		rdi,	rdi			;if (rdi == NULL)
	je		error				;return NULL
	or		rsi,	rsi			;if (rsi == NULL)
	je		error				;return NULL
	call	ft_strlen
	mov		rbx, 	rax			;save len1
	mov		rdi, 	rsi
	call	ft_strlen
	inc		rax					;inc to '\0'
	mov		rdx, 	rax
	pop		rsi
	pop		rdi
	mov		rax,	rdi
	push	rdi
	add		rdi, 	rbx
	call	ft_memcpy
	pop 	rdi
	mov		rax, 	rdi
	ret

error:
	or		rax,	rax
	pop		rsi
	pop		rdi
	ret