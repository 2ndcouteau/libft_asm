section .text
	global	ft_memcpy			;void *ft_memcpy(coid *dst, const void *src, size_t n)

ft_memcpy:
	push	rdi
	push	rsi
	push	rdx
	or		rdx,	rdx			;if	n == 0
	jle		exit
	or		rdi, 	rdi			;if dst == NULL
	je		exit
	or		rsi, 	rsi			;if src == NULL
	je		exit
	mov		rcx,	rdx			;set n in good register for movsb
	cld							;init incrementation
	rep		movsb				;while cpt != n {dst[cpt] = src[cpt]}

exit:
	pop		rdx
	pop		rsi
	pop		rax					;pop result directly in rax for the return
	ret							;return rax