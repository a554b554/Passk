#
#SPL Compiler Ver 0.1.5
#
.file "test.s"

sys_call_id = 0x80
exit_syscall = 0x1

.data


#---program hello ---

# --- main routine ----
		.text
.globl _main
		.type _main, @function
_main:
		pushl	%ebp
		movl	%esp, %ebp
		movl	$17, %eax
		movl	%eax, va_001
		movl	$10, %eax
		movl	%eax, vb_002
		leave
		ret
.size _main, .-main


.globl _start
_start:
		call _main
		movl $0, %ebx
		movl $exit_syscall, %eax
		int  $sys_call_id
.ident	"SPL: 0.1.5"

#.bss variables
		.comm vw_004,4,4
		.comm vc_003,4,4
		.comm vb_002,4,4
		.comm va_001,4,4
