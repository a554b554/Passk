	.section	__TEXT,__text,regular,pure_instructions
	.macosx_version_min 10, 10
	.globl	_main
	.align	4, 0x90
_main:                                  ## @main
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
	movl $4, %eax
	movl $1, %ebx
	movl $output,%ecx
	movl $12,%edx
	int  $0x80
	movl $1, %eax
	movl $0, %ebx
	int  $0x80
	retq
	.cfi_endproc
	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"qw%d\n"

L_.str1:                                ## @.str1
	.asciz	"a%c\n"

output:
	.ascii "hello,world\n"

.subsections_via_symbols
