section .data
	msg db 'hello, holberton', 10
section .text
	global main
	extern printf
main:
	mov rdi, msg
	xor eax. eax
	call printf

	ret
