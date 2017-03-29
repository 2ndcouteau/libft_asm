section .text
	global ft_memset			;void *ft_memset(void *b, int c, size_t len)

ft_memset:
	push	rdi
	push	rsi
	push	rdx
	or		rdx,	rdx			;if rdx == 0
	jle		exit
	or		rdi, 	rdi			;if rdi == NULL
	je		exit
	mov		rax, 	rsi			;init arg for stosb
	mov		rcx, 	rdx
	cld							;init incrementation
	repz	stosb				;while cpt < rax (len) --> cp rsi (c) in rdi[cpt]

exit:
	pop		rdx
	pop		rsi
	pop		rax					;pop result directly in rax for the return
	ret							;return rax