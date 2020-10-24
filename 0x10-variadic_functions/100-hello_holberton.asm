section .data
	msg    db "Hello, Holberton", 10 ; db: data byte, 10: ASCII newline
section .text
	global main
main :
	    mov	rax, 1		; write
	    mov	rdi, 1		; to stdout
	    mov	rsi, msg	; starting at msg
	    mov	rdx, 18		; for len bytes
	    syscall
	    mov	rax, 60		; exit
	    mov	rdi, 0		; with success
	    syscall		;_
