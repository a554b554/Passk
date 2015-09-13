	.section  	__TEXT,__text,regular,pure_instructions
	.macosx_version_min 10, 10
	.globl	_main
	.align	4, 0x90




_main:                                  ## @main
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$48, %rsp
	movq	$1, %rax
	movq	%rax, -16(%rbp)
	movq	$12, %rax
	movq	%rax, -8(%rbp)
	imulq	, 
	movq	%rax, -32(%rbp)
	leave
	retq
	.section	__TEXT,__text,regular,pure_instructions
	.macosx_version_min 10, 10
	.globl	_ptint
	.align	4, 0x90
_ptint:                                 ## @ptint
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	leaq	L_.ptint(%rip), %rax
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

	.section	__TEXT,__cstring,cstring_literals
L_.ptint:                                 ## @.str
	.asciz	"%d\n"
.subsections_via_symbols