global	_ft_read
extern	___error

section	.text

_ft_read:
	mov		rax, 0x2000003
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
