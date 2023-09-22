;-----------------------------------------------------------------
;Writes "Hello, Holberton" to the console using only system calls
;-----------------------------------------------------------------
	global	start

	extern	printf

	section	.text
start:
	mov	rdi, meow
	xor	rax, rax
	call	printf

	mov	rax, 0x02000001
	xor	rdi, rdi
	syscall

	section	.data
meow:
	db	"hello_holberton", 10, 0
