	.file	"main.c"
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
LC0:
	.ascii "%d\0"
LC1:
	.ascii "Normal function %d\12\0"
LC2:
	.ascii "Inline Function %d\12\0"
	.section	.text.startup,"x"
	.p2align 4,,15
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB24:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	pushl	%ebx
	andl	$-16, %esp
	subl	$32, %esp
	.cfi_offset 3, -12
	call	___main
	leal	28(%esp), %eax
	movl	$LC0, (%esp)
	movl	%eax, 4(%esp)
	call	_scanf
	movl	28(%esp), %ebx
	movl	$LC1, (%esp)
	imull	%ebx, %ebx
	movl	%ebx, 4(%esp)
	call	_printf
	movl	%ebx, 4(%esp)
	movl	$LC2, (%esp)
	call	_printf
	xorl	%eax, %eax
	movl	-4(%ebp), %ebx
	leave
	.cfi_restore 5
	.cfi_restore 3
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE24:
	.text
	.p2align 4,,15
	.globl	_square
	.def	_square;	.scl	2;	.type	32;	.endef
_square:
LFB25:
	.cfi_startproc
	movl	4(%esp), %eax
	imull	%eax, %eax
	ret
	.cfi_endproc
LFE25:
	.ident	"GCC: (MinGW.org GCC-6.3.0-1) 6.3.0"
	.def	_scanf;	.scl	2;	.type	32;	.endef
	.def	_printf;	.scl	2;	.type	32;	.endef
