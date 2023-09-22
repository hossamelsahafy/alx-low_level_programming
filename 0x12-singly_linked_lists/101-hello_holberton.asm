;-----------------------------------------------------------------
;Writes "Hello, Holberton" to the console using only system calls
;-----------------------------------------------------------------
	global	start

	section		.text
start:	mov	rax, 0x02000004
	mov	rdi, 1
	mov	rsi, meow
	mov	rdx, 18
	syscall
	mov	rax, 0x02000001
	xor	rdi, rdi
	syscall

	section	.data
meow:	db	"Hello, Holberton", 10
