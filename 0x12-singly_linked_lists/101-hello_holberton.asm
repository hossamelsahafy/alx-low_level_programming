;-----------------------------------------------------------------
;Writes "Hello, Holberton" to the console using only system calls
;-----------------------------------------------------------------
	global	main

	extern	printf

	section	.text
main:
	mov	rdi, meo
	xor	rax, rax
	call	printf

	mov	rax, 0x02000001
	xor	rdi, rdi
	syscall

	section	.data
meo:
	db	"Hello, Holberton", 10, 0
