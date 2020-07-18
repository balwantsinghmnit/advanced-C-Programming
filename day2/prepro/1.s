	.file	"1.c"
	.text
	.globl	x
	.data
	.align 4
	.type	x, @object
	.size	x, 4
x:
	.long	30
	.globl	max_temp
	.align 4
	.type	max_temp, @object
	.size	max_temp, 4
max_temp:
	.long	40
	.section	.rodata
.LC0:
	.string	"value = %d\n"
.LC1:
	.string	"varx = %d\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	$100, -4(%rbp)
	movl	max_temp(%rip), %edx
	movl	-4(%rbp), %eax
	addl	%edx, %eax
	addl	$100, %eax
	movl	%eax, -4(%rbp)
	movl	$100, %esi
	leaq	.LC0(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	-4(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC1(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 7.5.0-3ubuntu1~18.04) 7.5.0"
	.section	.note.GNU-stack,"",@progbits
