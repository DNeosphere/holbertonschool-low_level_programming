section.data
	text db "Hello, Holberton", 10
	.size equ $ - text
section.text
global main
main:
	mov rdi, 1		;to the standard output
	mov rsi, text		;message to peint
	mov rdx, text.size	;size of text to print
	mov rax, 1		;write
	syscall

	mov rax, 60
	mov rdi, 0
	syscall

