	.globl	f
	.data
	.align	4
	.type	f, @object
	.size	f, 4
f:
	.long	1
	.globl	F
	.data
	.align	4
	.type	F, @object
	.size	F, 4
F:
	.long	1
.section	.rodata
.LC0:
	.string "This test calculates the n'th Fibonacci number using Recursive functions\nEnter the value of n: "
# printStr: 
# readInt: 
# printInt: 
# t0 = 1
# f = t0
# t1 = 1
# F = t1
# fibNum: 

	.text
	.globl	fibNum
	.type	fibNum, @function
fibNum:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$64, %rsp
# t2 = 0
	movl	$0, -4(%rbp)
# t3 = 1
	movl	$1, -8(%rbp)
# if n == t2 goto .L0
	movl	16(%rbp), %eax
	cmpl	-4(%rbp), %eax
	jne	.L6
	jmp	.L0
.L6:
# t3 = 0
	movl	$0, -8(%rbp)
# goto .L1
	jmp	.L1
# goto .L2
	jmp	.L2
# t4 = 0
.L0:
	movl	$0, -12(%rbp)
# return t4
	movq	-12(%rbp), %rax
	leave
	ret
# goto .L2
	jmp	.L2
# t5 = 1
.L1:
	movl	$1, -16(%rbp)
# t6 = 1
	movl	$1, -20(%rbp)
# if n == t5 goto .L3
	movl	16(%rbp), %eax
	cmpl	-16(%rbp), %eax
	jne	.L7
	jmp	.L3
.L7:
# t6 = 0
	movl	$0, -20(%rbp)
# goto .L4
	jmp	.L4
# goto .L5
	jmp	.L5
# t7 = 1
.L3:
	movl	$1, -24(%rbp)
# return t7
	movq	-24(%rbp), %rax
	leave
	ret
# goto .L2
	jmp	.L2
# t8 = 1
.L4:
	movl	$1, -32(%rbp)
# t9 = n - t8
	movl	16(%rbp), %edx
	movl	-32(%rbp), %eax
	subl	%eax, %edx
	movl	%edx, %eax
	movl	%eax, -36(%rbp)
# param t9
# t10 = call fibNum, 1
	movq	-36(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	fibNum
	movq	%rax, -40(%rbp)
	addq	$4, %rsp
# t11 = 2
	movl	$2, -44(%rbp)
# t12 = n - t11
	movl	16(%rbp), %edx
	movl	-44(%rbp), %eax
	subl	%eax, %edx
	movl	%edx, %eax
	movl	%eax, -48(%rbp)
# param t12
# t13 = call fibNum, 1
	movq	-48(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	fibNum
	movq	%rax, -52(%rbp)
	addq	$4, %rsp
# t14 = t10 + t13
	movl	-40(%rbp), %eax
	movl	-52(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -56(%rbp)
# return t14
	movq	-56(%rbp), %rax
	leave
	ret
# goto .L2
	jmp	.L2
# goto .L2
.L5:
	jmp	.L2
# function fibNum ends
.L2:
	leave
	ret
	.size	fibNum, .-fibNum
# main: 

	.text
	.globl	main
	.type	main, @function
main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$64, %rsp
# param .LC0
# t15 = call printStr, 1
	movq	$.LC0, %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -20(%rbp)
	addq	$4, %rsp
# t16 = &n
	leaq	-4(%rbp), %rax
	movq	%rax, -32(%rbp)
# param t16
# t17 = call readInt, 1
	movq	-32(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	readInt
	movq	%rax, -36(%rbp)
	addq	$8, %rsp
# param n
# t18 = call fibNum, 1
	movq	-4(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	fibNum
	movq	%rax, -44(%rbp)
	addq	$4, %rsp
# output = t18
	movl	-44(%rbp), %eax
	movl	%eax, -8(%rbp)
# param output
# t19 = call printInt, 1
	movq	-8(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printInt
	movq	%rax, -52(%rbp)
	addq	$4, %rsp
# t20 = 0
	movl	$0, -56(%rbp)
# return t20
	movq	-56(%rbp), %rax
	leave
	ret
# function main ends
	leave
	ret
	.size	main, .-main
