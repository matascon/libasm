global	_ft_strcmp

section	.text

_ft_strcmp:
	mov		rcx, 0
	jmp		compare

compare:
	mov		dl, byte[rdi + rcx]
	cmp		byte[rsi + rcx], dl
	jne		end
	cmp		dl, 0
	je		end
	inc		rcx
	jmp		compare

end:
	movzx	rax, byte[rdi + rcx]
	movzx	rdx, byte[rsi + rcx]
	sub		rax, rdx
	ret
