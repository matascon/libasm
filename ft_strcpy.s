global	_ft_strcpy

section .text

_ft_strcpy:
	mov		rax, rdi
	mov		rcx, 0
	jmp		copy

copy:
	cmp		byte[rsi + rcx], 0
	je		end
	mov		dl, byte[rsi + rcx]
	mov		byte[rax + rcx], dl
	inc		rcx
	jmp		copy

end:
	mov		BYTE[rax + rcx], 0
	ret
