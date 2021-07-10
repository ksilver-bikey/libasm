segment .text

	global _ft_strcmp

_ft_strcmp:
	mov rcx, -1

cycl:
	inc rcx
	mov al, byte[rdi + rcx]
	sub al, byte[rsi + rcx]
	cmp byte[rdi + rcx], 0
	jz out
	cmp al, 0
	jz cycl
	jmp out

out:
	movsx rax, al
	ret
