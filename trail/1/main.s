	.file	"main.c"
	.globl	_a
	.data
	.align 4
_a:
	.long	4
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
LC0:
	.ascii "the user input is \0"
LC1:
	.ascii "%d\0"
LC2:
	.ascii "%d is the user input\12\0"
	.align 4
LC3:
	.ascii "%d is the total length of words \12\0"
LC4:
	.ascii "%s %d\0"
LC5:
	.ascii "hey 4\0"
	.align 4
LC6:
	.ascii "I have extracted the integer as %d and character or string as %s \12\0"
	.align 4
LC7:
	.ascii "\12 the value outside the loop is %d\0"
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB14:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	subl	$352, %esp
	call	___main
	movl	$LC0, (%esp)
	call	_printf
	leal	340(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC1, (%esp)
	call	_scanf
	movl	340(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC2, (%esp)
	call	_printf
	leal	286(%esp), %eax
	movl	$7955816, (%eax)
	movl	$3, 348(%esp)
	movl	348(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC3, (%esp)
	call	_printf
	leal	336(%esp), %eax
	movl	%eax, 12(%esp)
	leal	29(%esp), %eax
	movl	%eax, 8(%esp)
	movl	$LC4, 4(%esp)
	movl	$LC5, (%esp)
	call	_sscanf
	movl	336(%esp), %eax
	leal	29(%esp), %edx
	movl	%edx, 8(%esp)
	movl	%eax, 4(%esp)
	movl	$LC6, (%esp)
	call	_printf
	call	_sub_main
	movl	%eax, 344(%esp)
	movl	344(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC7, (%esp)
	call	_printf
	movl	$0, %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE14:
	.globl	_sub_main
	.def	_sub_main;	.scl	2;	.type	32;	.endef
_sub_main:
LFB15:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	movl	_a, %eax
	addl	$1, %eax
	movl	%eax, _a
	movl	_a, %eax
	movl	%eax, 4(%esp)
	movl	$LC1, (%esp)
	call	_printf
	movl	_a, %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE15:
	.ident	"GCC: (MinGW.org GCC-6.3.0-1) 6.3.0"
	.def	_printf;	.scl	2;	.type	32;	.endef
	.def	_scanf;	.scl	2;	.type	32;	.endef
	.def	_sscanf;	.scl	2;	.type	32;	.endef
