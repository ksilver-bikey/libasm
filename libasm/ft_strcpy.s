segment .text

	global _ft_strcpy

_ft_strcpy:
	mov rcx, -1

cycl:
	inc rcx
	mov bl, byte[rsi + rcx]
	mov byte[rdi + rcx], bl
	cmp byte[rdi + rcx], 0
	jnz cycl
	mov rax, rdi
	ret
