global	_ft_atoi_base
extern	_ft_strlen

section	.text

_ft_atoi_base:
	mov		rax, 0
	jmp		len_base

len_base:
	push	rdi
	mov		rdi, rsi
	call	_ft_strlen
	pop		rdi
	jmp		check_errors

check_errors:
	jmp		len_base_error

len_base_error:
	cmp		rax, 0
	je		error
	cmp		rax, 1
	je		error
	mov		rcx, -1 
	jmp		char_base_error

char_base_error:
	inc		rcx
	cmp		rcx, rax
	je		search_number
	mov		r8, -1
	mov		r11b, byte[rsi + rcx]
	jmp		loop_char_base_error

loop_char_base_error:
	inc		r8
	cmp		rcx, r8
	je		loop_char_base_error
	cmp		byte[rsi + r8], r11b
	je		error
	cmp		byte[rsi + r8], 32
	je		error
	cmp		byte[rsi + r8], 43
	je		error
	cmp		byte[rsi + r8], 45
	je		error
	cmp		byte[rsi + r8], 0
	je		char_base_error
	jmp		loop_char_base_error

search_number:
	mov		rcx, -1
	mov		r9, 1
	jmp		loop_search_number

loop_search_number:
	inc		rcx
	cmp		byte[rdi + rcx], 32
	je		loop_search_number
	cmp		byte[rdi + rcx], 43
	je		loop_search_number
	cmp		byte[rdi + rcx], 45
	je		found_minus
	jmp		found_number

found_minus:
	imul	r9, -1
	jmp		loop_search_number

found_number:
	sub		rcx, 1
	mov		r10, 0
	jmp		loop_parse_number

loop_parse_number:
	inc		rcx
	mov		r11b, byte[rdi + rcx]
	mov		r8, -1
	jmp		identify_digit

identify_digit:
	inc		r8
	cmp		byte[rsi + r8], 0
	je		end
	cmp		r11b, byte[rsi + r8]
	je		save_number
	jmp		identify_digit

save_number:
	add		r10, r8
	imul	r10, rax
	jmp		loop_parse_number

error:
	mov		rax, 0
	ret

end:
	push	r10
	mov		r10, rax
	pop		rax
	idiv	r10
	imul	rax, r9
	ret
