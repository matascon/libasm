global	_ft_write
extern	___error

section	.text

_ft_write:
	mov		rax, 0x2000004
	syscall
	cmp		rax, 0
	jl		error
	ret

error:
	neg		rax
	mov		rcx, rax
	call	___error
	mov		[rax], rcx
	mov		rax, -1
	ret
