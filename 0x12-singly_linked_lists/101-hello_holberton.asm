section .data
	msg db 'Hello, Holberton', 10, 0

section .text
	global main
	extern printf

main:
	push rbp
	mov rbp, rsp

	mov rdi, msg
	xor eax, eax
	call printf

	mov rsp, rbp
	pop rbp
   	ret
