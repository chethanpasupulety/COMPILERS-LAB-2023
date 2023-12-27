.section	.rodata
.LC0:
	.string "This implements a function to check if there is a sum of 2 integers in an array with sum=x\n The array elements are hardcoded as following 2,3,6,10,11\n"
.LC1:
	.string "Enter x : "
.LC2:
	.string "Yes the sum exists"
.LC3:
	.string "No the sum doesn't exist"
# printStr: 
# printInt: 
# readInt: 
# isPossible: 

	.text
	.globl	isPossible
	.type	isPossible, @function
isPossible:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$112, %rsp
# t0 = 0
	movl	$0, -4(%rbp)
# t1 = 4
	movl	$4, -8(%rbp)
# i = t0
	movl	-4(%rbp), %eax
	movl	%eax, -12(%rbp)
# j = t1
	movl	-8(%rbp), %eax
	movl	%eax, -16(%rbp)
# t2 = 1
.L5:
	movl	$1, -20(%rbp)
# if i < j goto .L0
	movl	-12(%rbp), %eax
	cmpl	-16(%rbp), %eax
	jge	.L13
	jmp	.L0
.L13:
# t2 = 0
	movl	$0, -20(%rbp)
# goto .L1
	jmp	.L1
# goto .L1
	jmp	.L1
# t3 = 0
.L0:
	movl	$0, -24(%rbp)
# t4 = i
	movl	-12(%rbp), %eax
	movl	%eax, -28(%rbp)
# t4 = t4 * 4
	movl	-28(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -28(%rbp)
# t3 = t4
	movl	-28(%rbp), %eax
	movl	%eax, -24(%rbp)
# t5 = arr[t3]
	movl	-24(%rbp), %edx
cltq
	movq	16(%rbp), %rdi
	addq	%rdi, %rdx
	movq	(%rdx) ,%rax
	movq	%rax, -32(%rbp)
# t6 = 0
	movl	$0, -36(%rbp)
# t7 = j
	movl	-16(%rbp), %eax
	movl	%eax, -40(%rbp)
# t7 = t7 * 4
	movl	-40(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -40(%rbp)
# t6 = t7
	movl	-40(%rbp), %eax
	movl	%eax, -36(%rbp)
# t8 = arr[t6]
	movl	-36(%rbp), %edx
cltq
	movq	16(%rbp), %rdi
	addq	%rdi, %rdx
	movq	(%rdx) ,%rax
	movq	%rax, -44(%rbp)
# t9 = t5 + t8
	movl	-32(%rbp), %eax
	movl	-44(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -48(%rbp)
# t10 = 1
	movl	$1, -52(%rbp)
# if t9 < x goto .L2
	movl	-48(%rbp), %eax
	cmpl	24(%rbp), %eax
	jge	.L14
	jmp	.L2
.L14:
# t10 = 0
	movl	$0, -52(%rbp)
# goto .L3
	jmp	.L3
# goto .L4
	jmp	.L4
# t11 = i
.L2:
	movl	-12(%rbp), %eax
	movl	%eax, -56(%rbp)
# i = i + 1
	movl	-12(%rbp), %eax
	movl	$1, %edx
	addl	%edx, %eax
	movl	%eax, -12(%rbp)
# goto .L5
	jmp	.L5
# t12 = 0
.L3:
	movl	$0, -60(%rbp)
# t13 = i
	movl	-12(%rbp), %eax
	movl	%eax, -64(%rbp)
# t13 = t13 * 4
	movl	-64(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -64(%rbp)
# t12 = t13
	movl	-64(%rbp), %eax
	movl	%eax, -60(%rbp)
# t14 = arr[t12]
	movl	-60(%rbp), %edx
cltq
	movq	16(%rbp), %rdi
	addq	%rdi, %rdx
	movq	(%rdx) ,%rax
	movq	%rax, -68(%rbp)
# t15 = 0
	movl	$0, -72(%rbp)
# t16 = j
	movl	-16(%rbp), %eax
	movl	%eax, -76(%rbp)
# t16 = t16 * 4
	movl	-76(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -76(%rbp)
# t15 = t16
	movl	-76(%rbp), %eax
	movl	%eax, -72(%rbp)
# t17 = arr[t15]
	movl	-72(%rbp), %edx
cltq
	movq	16(%rbp), %rdi
	addq	%rdi, %rdx
	movq	(%rdx) ,%rax
	movq	%rax, -80(%rbp)
# t18 = t14 + t17
	movl	-68(%rbp), %eax
	movl	-80(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -84(%rbp)
# t19 = 1
	movl	$1, -88(%rbp)
# if t18 > x goto .L6
	movl	-84(%rbp), %eax
	cmpl	24(%rbp), %eax
	jle	.L15
	jmp	.L6
.L15:
# t19 = 0
	movl	$0, -88(%rbp)
# goto .L7
	jmp	.L7
# goto .L8
	jmp	.L8
# t21 = j
.L6:
	movl	-16(%rbp), %eax
	movl	%eax, -96(%rbp)
# j = j - 1
	movl	-16(%rbp), %edx
	movl	$1, %eax
	subl	%eax, %edx
	movl	%edx, %eax
	movl	%eax, -16(%rbp)
# goto .L5
	jmp	.L5
# t22 = 1
.L7:
	movl	$1, -100(%rbp)
# return t22
	movq	-100(%rbp), %rax
	leave
	ret
# goto .L5
	jmp	.L5
# goto .L5
.L8:
	jmp	.L5
# goto .L5
.L4:
	jmp	.L5
# t23 = 0
.L1:
	movl	$0, -104(%rbp)
# return t23
	movq	-104(%rbp), %rax
	leave
	ret
# function isPossible ends
	leave
	ret
	.size	isPossible, .-isPossible
# main: 

	.text
	.globl	main
	.type	main, @function
main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$192, %rsp
# t24 = 5
	movl	$5, -4(%rbp)
# t25 = 0
	movl	$0, -28(%rbp)
# t26 = 0
	movl	$0, -32(%rbp)
# t27 = t25
	movl	-28(%rbp), %eax
	movl	%eax, -36(%rbp)
# t27 = t27 * 4
	movl	-36(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -36(%rbp)
# t26 = t27
	movl	-36(%rbp), %eax
	movl	%eax, -32(%rbp)
# t28 = 2
	movl	$2, -40(%rbp)
# arr[t26] = t28
	movl	-32(%rbp), %edx
	movl	-40(%rbp), %eax
cltq
	movl	%eax, -24(%rbp,%rdx,1)
# t29 = 1
	movl	$1, -44(%rbp)
# t30 = 0
	movl	$0, -48(%rbp)
# t31 = t29
	movl	-44(%rbp), %eax
	movl	%eax, -52(%rbp)
# t31 = t31 * 4
	movl	-52(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -52(%rbp)
# t30 = t31
	movl	-52(%rbp), %eax
	movl	%eax, -48(%rbp)
# t32 = 3
	movl	$3, -56(%rbp)
# arr[t30] = t32
	movl	-48(%rbp), %edx
	movl	-56(%rbp), %eax
cltq
	movl	%eax, -24(%rbp,%rdx,1)
# t33 = 2
	movl	$2, -60(%rbp)
# t34 = 0
	movl	$0, -64(%rbp)
# t35 = t33
	movl	-60(%rbp), %eax
	movl	%eax, -68(%rbp)
# t35 = t35 * 4
	movl	-68(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -68(%rbp)
# t34 = t35
	movl	-68(%rbp), %eax
	movl	%eax, -64(%rbp)
# t36 = 6
	movl	$6, -72(%rbp)
# arr[t34] = t36
	movl	-64(%rbp), %edx
	movl	-72(%rbp), %eax
cltq
	movl	%eax, -24(%rbp,%rdx,1)
# t37 = 3
	movl	$3, -76(%rbp)
# t38 = 0
	movl	$0, -80(%rbp)
# t39 = t37
	movl	-76(%rbp), %eax
	movl	%eax, -84(%rbp)
# t39 = t39 * 4
	movl	-84(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -84(%rbp)
# t38 = t39
	movl	-84(%rbp), %eax
	movl	%eax, -80(%rbp)
# t40 = 10
	movl	$10, -88(%rbp)
# arr[t38] = t40
	movl	-80(%rbp), %edx
	movl	-88(%rbp), %eax
cltq
	movl	%eax, -24(%rbp,%rdx,1)
# t41 = 4
	movl	$4, -92(%rbp)
# t42 = 0
	movl	$0, -96(%rbp)
# t43 = t41
	movl	-92(%rbp), %eax
	movl	%eax, -100(%rbp)
# t43 = t43 * 4
	movl	-100(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -100(%rbp)
# t42 = t43
	movl	-100(%rbp), %eax
	movl	%eax, -96(%rbp)
# t44 = 11
	movl	$11, -104(%rbp)
# arr[t42] = t44
	movl	-96(%rbp), %edx
	movl	-104(%rbp), %eax
cltq
	movl	%eax, -24(%rbp,%rdx,1)
# param .LC0
# t45 = call printStr, 1
	movq	$.LC0, %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -116(%rbp)
	addq	$4, %rsp
# param .LC1
# t46 = call printStr, 1
	movq	$.LC1, %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -132(%rbp)
	addq	$4, %rsp
# t47 = &x
	leaq	-120(%rbp), %rax
	movq	%rax, -144(%rbp)
# param t47
# t48 = call readInt, 1
	movq	-144(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	readInt
	movq	%rax, -148(%rbp)
	addq	$8, %rsp
# param arr
# param x
# t50 = call isPossible, 2
	movq	-120(%rbp), %rax
	pushq	%rax
	movq	%rax, %rsi
	leaq	-24(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	isPossible
	movq	%rax, -160(%rbp)
	addq	$12, %rsp
# goto .L9
	jmp	.L9
# param .LC2
.L12:
# t51 = call printStr, 1
	movq	$.LC2, %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -168(%rbp)
	addq	$4, %rsp
# goto .L10
	jmp	.L10
# param .LC3
.L11:
# t52 = call printStr, 1
	movq	$.LC3, %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -176(%rbp)
	addq	$4, %rsp
# goto .L10
	jmp	.L10
# if t50 == 0  goto .L11
.L9:
	movl	-160(%rbp), %eax
	cmpl	$0, %eax
	jne	.L16
	jmp	.L11
.L16:
# goto .L12
	jmp	.L12
# t53 = 0
.L10:
	movl	$0, -180(%rbp)
# return t53
	movq	-180(%rbp), %rax
	leave
	ret
# function main ends
	leave
	ret
	.size	main, .-main
