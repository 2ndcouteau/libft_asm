section .text
	global ft_bzero				;prototype de ma fonction (vois *s, size_t n)

ft_bzero:
	push	rdi					;save de *s pour ret
	or		rdi,	0			;If s == NULL
	je		exit				;return (NULL)
	mov		rcx,	rsi			;else
	xor		al,		al
	jmp		loop

loop:
	or		rcx,	rcx			;if (rcx == 0)
	je		exit				;return s
	and		[rdi],	al			;else s = '0'
	dec		rcx					;rcx--
	inc		rdi					;s++;
	jmp		loop				;boucle while

exit:
	pop		rax					;vide la stack sur dans rax qui sera le registre lu au retour de la fonction.
	ret