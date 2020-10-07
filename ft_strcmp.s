global	_ft_strcmp

section	.text

_ft_strcmp:
	mov		rcx, 0
	jmp		compare

compare:
	mov		r9b, byte[rdi + rcx]
	cmp		byte[rsi + rcx], r9b
	jne		end
	cmp		r9b, 0
	je		end
	inc		rcx
	jmp		compare

end:
	movzx	rax, byte[rdi + rcx]
	movzx	r8, byte[rsi + rcx]
	sub		rax, r8
	ret
