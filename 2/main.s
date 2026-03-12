	.file	"main.c"
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
LC0:
	.ascii "%s %d %f\0"
LC1:
	.ascii "siva 24 4.15\0"
LC2:
	.ascii "%d\12\0"
LC3:
	.ascii "%f\0"
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
	pushl	%esi
	pushl	%ebx
	andl	$-16, %esp
	subl	$64, %esp
	.cfi_offset 6, -12
	.cfi_offset 3, -16
	call	___main
	leal	40(%esp), %eax
	leal	44(%esp), %ebx
	movl	$LC0, 4(%esp)
	movl	$LC1, (%esp)
	movl	%eax, 16(%esp)
	leal	36(%esp), %eax
	movl	%ebx, 8(%esp)
	movl	%eax, 12(%esp)
	call	_sscanf
	movl	%ebx, (%esp)
	movl	%eax, %esi
	call	_puts
	movl	%esi, 4(%esp)
	movl	$LC2, (%esp)
	call	_printf
	flds	40(%esp)
	movl	$LC3, (%esp)
	fstpl	4(%esp)
	call	_printf
	leal	-8(%ebp), %esp
	xorl	%eax, %eax
	popl	%ebx
	.cfi_restore 3
	popl	%esi
	.cfi_restore 6
	popl	%ebp
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE24:
	.ident	"GCC: (MinGW.org GCC-6.3.0-1) 6.3.0"
	.def	_sscanf;	.scl	2;	.type	32;	.endef
	.def	_puts;	.scl	2;	.type	32;	.endef
	.def	_printf;	.scl	2;	.type	32;	.endef
