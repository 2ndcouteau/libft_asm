section .text
	global		ft_strdup		;char	*ft_strdup(const char *s1)
	extern		ft_strlen
	extern		ft_memcpy
	extern		malloc

ft_strdup:
	push	rdi
	xor		rax,	rax			;init rax for strlen
	or		rdi,	rdi			;check if s1 == NULL
	je		error				;return rax = 0

dup:
	call	ft_strlen			;recup len(s1)
	inc		rax					;add +1 for the '\0'
	mov		rbx,	rax			;save len
	mov		rdi,	rbx			;set rdi for malloc
	call	malloc
	jc		error				;if error in malloc

copy:
	mov		rdi,	rax			;mov malloc pointer in rdi for ft_memcpy
	pop		rsi					;recup s1 for cpy
	mov		rdx,	rbx			;recup len of s1
	call	ft_memcpy			;include rep


exit:
	ret							;return (rax)

error:
	pop		rdi					;recup rdi == NULL
	xor		rax,	rax			;rax = 0
	jmp		exit				;return (0)