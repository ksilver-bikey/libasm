segment .text

	global _ft_strlen

_ft_strlen:
	mov rax, -1

cycl:
	inc rax
	cmp byte[rdi + rax], 0
	jnz cycl
	ret
