section .data
	string db	`Hello, Holberton\n`
	string_len equ	$-string

	section .text
	global main
main:
	mov ebx, 1
	mov eax, 4
	mov ecx, string
	mov edx, string_len
	int 0x80

	mov ebx, 0
	mov eax, 1
	int 0x80
