.section	.rodata
.LC0:
	.string "This test takes in a positive integer X and calculates the sum of the consecutive positive integers till X\nEnter a positive integer: "
.LC1:
	.string "Sum = "
# printStr: 
# printInt: 
# readInt: 
# sum: 

	.text
	.globl	sum
	.type	sum, @function
sum:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$32, %rsp
# t0 = 0
	movl	$0, -4(%rbp)
# t1 = 1
	movl	$1, -8(%rbp)
# if n != t0 goto .L0
	movl	16(%rbp), %eax
	cmpl	-4(%rbp), %eax
	je	.L2
	jmp	.L0
.L2:
# t1 = 0
	movl	$0, -8(%rbp)
# goto .L1
	jmp	.L1
# goto .L1
	jmp	.L1
# t2 = 1
.L0:
	movl	$1, -16(%rbp)
# t3 = n - t2
	movl	16(%rbp), %edx
	movl	-16(%rbp), %eax
	subl	%eax, %edx
	movl	%edx, %eax
	movl	%eax, -20(%rbp)
# param t3
# t4 = call sum, 1
	movq	-20(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	sum
	movq	%rax, -24(%rbp)
	addq	$4, %rsp
# t5 = n + t4
	movl	16(%rbp), %eax
	movl	-24(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -28(%rbp)
# return t5
	movq	-28(%rbp), %rax
	leave
	ret
# goto .L1
	jmp	.L1
# return n
.L1:
	movq	16(%rbp), %rax
	leave
	ret
# function sum ends
	leave
	ret
	.size	sum, .-sum
# main: 

	.text
	.globl	main
	.type	main, @function
main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$64, %rsp
# param .LC0
# t6 = call printStr, 1
	movq	$.LC0, %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -16(%rbp)
	addq	$4, %rsp
# t7 = &result
	leaq	-4(%rbp), %rax
	movq	%rax, -28(%rbp)
# param t7
# t8 = call readInt, 1
	movq	-28(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	readInt
	movq	%rax, -32(%rbp)
	addq	$8, %rsp
# param result
# t9 = call sum, 1
	movq	-4(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	sum
	movq	%rax, -40(%rbp)
	addq	$4, %rsp
# result = t9
	movl	-40(%rbp), %eax
	movl	%eax, -4(%rbp)
# param .LC1
# t10 = call printStr, 1
	movq	$.LC1, %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -48(%rbp)
	addq	$4, %rsp
# param result
# t11 = call printInt, 1
	movq	-4(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printInt
	movq	%rax, -56(%rbp)
	addq	$4, %rsp
# t12 = 0
	movl	$0, -60(%rbp)
# return t12
	movq	-60(%rbp), %rax
	leave
	ret
# function main ends
	leave
	ret
	.size	main, .-main
