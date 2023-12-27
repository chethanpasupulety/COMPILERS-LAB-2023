.section	.rodata
.LC0:
	.string "This test takes in 2 integers X and Y and Outputs the sum - X+Y\nEnter integer x : "
.LC1:
	.string "\nEnter integer y : "
.LC2:
	.string "x + y = "
.LC3:
	.string "\n"
# printStr: 
# printInt: 
# readInt: 
# main: 

	.text
	.globl	main
	.type	main, @function
main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$96, %rsp
# param .LC0
# t0 = call printStr, 1
	movq	$.LC0, %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -24(%rbp)
	addq	$4, %rsp
# t1 = &x
	leaq	-4(%rbp), %rax
	movq	%rax, -36(%rbp)
# param t1
# t2 = call readInt, 1
	movq	-36(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	readInt
	movq	%rax, -40(%rbp)
	addq	$8, %rsp
# param .LC1
# t3 = call printStr, 1
	movq	$.LC1, %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -48(%rbp)
	addq	$4, %rsp
# t4 = &y
	leaq	-8(%rbp), %rax
	movq	%rax, -56(%rbp)
# param t4
# t5 = call readInt, 1
	movq	-56(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	readInt
	movq	%rax, -60(%rbp)
	addq	$8, %rsp
# t6 = x + y
	movl	-4(%rbp), %eax
	movl	-8(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -64(%rbp)
# temp = t6
	movl	-64(%rbp), %eax
	movl	%eax, -12(%rbp)
# param .LC2
# t7 = call printStr, 1
	movq	$.LC2, %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -72(%rbp)
	addq	$4, %rsp
# param temp
# t8 = call printInt, 1
	movq	-12(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printInt
	movq	%rax, -80(%rbp)
	addq	$4, %rsp
# param .LC3
# t9 = call printStr, 1
	movq	$.LC3, %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -88(%rbp)
	addq	$4, %rsp
# t10 = 0
	movl	$0, -92(%rbp)
# return t10
	movq	-92(%rbp), %rax
	leave
	ret
# function main ends
	leave
	ret
	.size	main, .-main
