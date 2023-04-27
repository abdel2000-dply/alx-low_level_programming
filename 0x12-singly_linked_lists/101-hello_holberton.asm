section .data
	msg db 'Hello, Holberton', 10, 0
	msglen: equ $ - msg

section .text
	global main
	extern printf

main:
	mov rax, 1
	mov rdi, 1
	mov rsi, msg
	mov rdx, msglen
	syscall

	mov rax, 60
	mov rdi, 0
	syscall
