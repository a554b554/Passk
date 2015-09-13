	.section	__TEXT,__text,regular,pure_instructions
	.macosx_version_min 10, 10
	.globl	_ptint
	.align	4, 0x90
_ptint:                                 ## @ptint
	.cfi_startproc
## BB#0:
	pushq	%rbp
Ltmp0:
	.cfi_def_cfa_offset 16
Ltmp1:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Ltmp2:
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	leaq	L_.str(%rip), %rax
	movl	%edi, -4(%rbp)
	movl	-4(%rbp), %esi
	movq	%rax, %rdi
	movb	$0, %al
	callq	_printf
	movl	%eax, -8(%rbp)          ## 4-byte Spill
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc

	.globl	_main
	.align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## BB#0:
	pushq	%rbp
Ltmp3:
	.cfi_def_cfa_offset 16
Ltmp4:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Ltmp5:
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movl	$5, -4(%rbp)
	movl	$5, -8(%rbp)
	movl	$5, -12(%rbp)
	movl	$5, -16(%rbp)
	movl	$5, -20(%rbp)
	movl	$5, -24(%rbp)
	movl	-4(%rbp), %eax
	addl	-8(%rbp), %eax
	movl	-12(%rbp), %ecx
	addl	-4(%rbp), %ecx
	imull	%ecx, %eax
	movl	-12(%rbp), %ecx
	addl	-16(%rbp), %ecx
	addl	%ecx, %eax
	movl	%eax, -24(%rbp)
	movl	-4(%rbp), %edi
	callq	_ptint
	xorl	%eax, %eax
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc

	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"%d"


.subsections_via_symbols
