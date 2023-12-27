.section	.rodata
.LC0:
	.string "\nTesting == operator: "
.LC1:
	.string "Passed"
.LC2:
	.string "Failed"
.LC3:
	.string "\nTesting != operator: "
.LC4:
	.string "Passed"
.LC5:
	.string "Failed"
.LC6:
	.string "\nTesting < operator (strictly less): "
.LC7:
	.string "Passed"
.LC8:
	.string "Failed"
.LC9:
	.string "\nTesting < operator (equality): "
.LC10:
	.string "Failed"
.LC11:
	.string "Passed"
.LC12:
	.string "\nTesting <= operator (equality): "
.LC13:
	.string "Passed"
.LC14:
	.string "Failed"
.LC15:
	.string "\nTesting <= operator (strictly less): "
.LC16:
	.string "Passed"
.LC17:
	.string "Failed"
.LC18:
	.string "\nTesting > operator (strictly greater): "
.LC19:
	.string "Passed"
.LC20:
	.string "Failed"
.LC21:
	.string "\nTesting > operator (equality): "
.LC22:
	.string "Failed"
.LC23:
	.string "Passed"
.LC24:
	.string "\nTesting >= operator (equality): "
.LC25:
	.string "Passed"
.LC26:
	.string "Failed"
.LC27:
	.string "\nTesting >= operator (strictly greater): "
.LC28:
	.string "Passed"
.LC29:
	.string "Failed"
.LC30:
	.string "\n\n"
# printStr: 
# readInt: 
# printInt: 
# main: 

	.text
	.globl	main
	.type	main, @function
main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$368, %rsp
# t0 = 5
	movl	$5, -12(%rbp)
# n1 = t0
	movl	-12(%rbp), %eax
	movl	%eax, -4(%rbp)
# t1 = 5
	movl	$5, -16(%rbp)
# n2 = t1
	movl	-16(%rbp), %eax
	movl	%eax, -8(%rbp)
# param .LC0
# t2 = call printStr, 1
	movq	$.LC0, %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -28(%rbp)
	addq	$4, %rsp
# t3 = 1
	movl	$1, -32(%rbp)
# if n1 == n2 goto .L0
	movl	-4(%rbp), %eax
	cmpl	-8(%rbp), %eax
	jne	.L30
	jmp	.L0
.L30:
# t3 = 0
	movl	$0, -32(%rbp)
# goto .L1
	jmp	.L1
# goto .L2
	jmp	.L2
# param .LC1
.L0:
# t4 = call printStr, 1
	movq	$.LC1, %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -40(%rbp)
	addq	$4, %rsp
# goto .L2
	jmp	.L2
# param .LC2
.L1:
# t5 = call printStr, 1
	movq	$.LC2, %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -48(%rbp)
	addq	$4, %rsp
# goto .L2
	jmp	.L2
# t6 = 6
.L2:
	movl	$6, -52(%rbp)
# n2 = t6
	movl	-52(%rbp), %eax
	movl	%eax, -8(%rbp)
# param .LC3
# t7 = call printStr, 1
	movq	$.LC3, %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -60(%rbp)
	addq	$4, %rsp
# t8 = 1
	movl	$1, -64(%rbp)
# if n1 != n2 goto .L3
	movl	-4(%rbp), %eax
	cmpl	-8(%rbp), %eax
	je	.L31
	jmp	.L3
.L31:
# t8 = 0
	movl	$0, -64(%rbp)
# goto .L4
	jmp	.L4
# goto .L5
	jmp	.L5
# param .LC4
.L3:
# t9 = call printStr, 1
	movq	$.LC4, %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -72(%rbp)
	addq	$4, %rsp
# goto .L5
	jmp	.L5
# param .LC5
.L4:
# t10 = call printStr, 1
	movq	$.LC5, %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -80(%rbp)
	addq	$4, %rsp
# goto .L5
	jmp	.L5
# t11 = 1
.L5:
	movl	$1, -84(%rbp)
# t12 = -t11
	movl	-84(%rbp), %eax
	negl	%eax
	movl	%eax, -88(%rbp)
# n1 = t12
	movl	-88(%rbp), %eax
	movl	%eax, -4(%rbp)
# t13 = 3
	movl	$3, -92(%rbp)
# n2 = t13
	movl	-92(%rbp), %eax
	movl	%eax, -8(%rbp)
# param .LC6
# t14 = call printStr, 1
	movq	$.LC6, %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -100(%rbp)
	addq	$4, %rsp
# t15 = 1
	movl	$1, -104(%rbp)
# if n1 < n2 goto .L6
	movl	-4(%rbp), %eax
	cmpl	-8(%rbp), %eax
	jge	.L32
	jmp	.L6
.L32:
# t15 = 0
	movl	$0, -104(%rbp)
# goto .L7
	jmp	.L7
# goto .L8
	jmp	.L8
# param .LC7
.L6:
# t16 = call printStr, 1
	movq	$.LC7, %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -112(%rbp)
	addq	$4, %rsp
# goto .L8
	jmp	.L8
# param .LC8
.L7:
# t17 = call printStr, 1
	movq	$.LC8, %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -120(%rbp)
	addq	$4, %rsp
# goto .L8
	jmp	.L8
# t18 = 1
.L8:
	movl	$1, -124(%rbp)
# t19 = -t18
	movl	-124(%rbp), %eax
	negl	%eax
	movl	%eax, -128(%rbp)
# n2 = t19
	movl	-128(%rbp), %eax
	movl	%eax, -8(%rbp)
# param .LC9
# t20 = call printStr, 1
	movq	$.LC9, %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -136(%rbp)
	addq	$4, %rsp
# t21 = 1
	movl	$1, -140(%rbp)
# if n1 < n2 goto .L9
	movl	-4(%rbp), %eax
	cmpl	-8(%rbp), %eax
	jge	.L33
	jmp	.L9
.L33:
# t21 = 0
	movl	$0, -140(%rbp)
# goto .L10
	jmp	.L10
# goto .L11
	jmp	.L11
# param .LC10
.L9:
# t22 = call printStr, 1
	movq	$.LC10, %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -148(%rbp)
	addq	$4, %rsp
# goto .L11
	jmp	.L11
# param .LC11
.L10:
# t23 = call printStr, 1
	movq	$.LC11, %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -156(%rbp)
	addq	$4, %rsp
# goto .L11
	jmp	.L11
# param .LC12
.L11:
# t24 = call printStr, 1
	movq	$.LC12, %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -164(%rbp)
	addq	$4, %rsp
# t25 = 1
	movl	$1, -168(%rbp)
# if n1 <= n2 goto .L12
	movl	-4(%rbp), %eax
	cmpl	-8(%rbp), %eax
	jg	.L34
	jmp	.L12
.L34:
# t25 = 0
	movl	$0, -168(%rbp)
# goto .L13
	jmp	.L13
# goto .L14
	jmp	.L14
# param .LC13
.L12:
# t26 = call printStr, 1
	movq	$.LC13, %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -176(%rbp)
	addq	$4, %rsp
# goto .L14
	jmp	.L14
# param .LC14
.L13:
# t27 = call printStr, 1
	movq	$.LC14, %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -184(%rbp)
	addq	$4, %rsp
# goto .L14
	jmp	.L14
# t28 = 2
.L14:
	movl	$2, -188(%rbp)
# t29 = -t28
	movl	-188(%rbp), %eax
	negl	%eax
	movl	%eax, -192(%rbp)
# n1 = t29
	movl	-192(%rbp), %eax
	movl	%eax, -4(%rbp)
# param .LC15
# t30 = call printStr, 1
	movq	$.LC15, %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -200(%rbp)
	addq	$4, %rsp
# t31 = 1
	movl	$1, -204(%rbp)
# if n1 <= n2 goto .L15
	movl	-4(%rbp), %eax
	cmpl	-8(%rbp), %eax
	jg	.L35
	jmp	.L15
.L35:
# t31 = 0
	movl	$0, -204(%rbp)
# goto .L16
	jmp	.L16
# goto .L17
	jmp	.L17
# param .LC16
.L15:
# t32 = call printStr, 1
	movq	$.LC16, %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -212(%rbp)
	addq	$4, %rsp
# goto .L17
	jmp	.L17
# param .LC17
.L16:
# t33 = call printStr, 1
	movq	$.LC17, %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -220(%rbp)
	addq	$4, %rsp
# goto .L17
	jmp	.L17
# t34 = 7
.L17:
	movl	$7, -224(%rbp)
# n1 = t34
	movl	-224(%rbp), %eax
	movl	%eax, -4(%rbp)
# param .LC18
# t35 = call printStr, 1
	movq	$.LC18, %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -232(%rbp)
	addq	$4, %rsp
# t36 = 1
	movl	$1, -236(%rbp)
# if n1 > n2 goto .L18
	movl	-4(%rbp), %eax
	cmpl	-8(%rbp), %eax
	jle	.L36
	jmp	.L18
.L36:
# t36 = 0
	movl	$0, -236(%rbp)
# goto .L19
	jmp	.L19
# goto .L20
	jmp	.L20
# param .LC19
.L18:
# t37 = call printStr, 1
	movq	$.LC19, %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -244(%rbp)
	addq	$4, %rsp
# goto .L20
	jmp	.L20
# param .LC20
.L19:
# t38 = call printStr, 1
	movq	$.LC20, %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -252(%rbp)
	addq	$4, %rsp
# goto .L20
	jmp	.L20
# t39 = 7
.L20:
	movl	$7, -256(%rbp)
# n2 = t39
	movl	-256(%rbp), %eax
	movl	%eax, -8(%rbp)
# param .LC21
# t40 = call printStr, 1
	movq	$.LC21, %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -264(%rbp)
	addq	$4, %rsp
# t41 = 1
	movl	$1, -268(%rbp)
# if n1 > n2 goto .L21
	movl	-4(%rbp), %eax
	cmpl	-8(%rbp), %eax
	jle	.L37
	jmp	.L21
.L37:
# t41 = 0
	movl	$0, -268(%rbp)
# goto .L22
	jmp	.L22
# goto .L23
	jmp	.L23
# param .LC22
.L21:
# t42 = call printStr, 1
	movq	$.LC22, %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -276(%rbp)
	addq	$4, %rsp
# goto .L23
	jmp	.L23
# param .LC23
.L22:
# t43 = call printStr, 1
	movq	$.LC23, %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -284(%rbp)
	addq	$4, %rsp
# goto .L23
	jmp	.L23
# param .LC24
.L23:
# t44 = call printStr, 1
	movq	$.LC24, %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -292(%rbp)
	addq	$4, %rsp
# t45 = 1
	movl	$1, -296(%rbp)
# if n1 >= n2 goto .L24
	movl	-4(%rbp), %eax
	cmpl	-8(%rbp), %eax
	jl	.L38
	jmp	.L24
.L38:
# t45 = 0
	movl	$0, -296(%rbp)
# goto .L25
	jmp	.L25
# goto .L26
	jmp	.L26
# param .LC25
.L24:
# t46 = call printStr, 1
	movq	$.LC25, %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -304(%rbp)
	addq	$4, %rsp
# goto .L26
	jmp	.L26
# param .LC26
.L25:
# t47 = call printStr, 1
	movq	$.LC26, %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -312(%rbp)
	addq	$4, %rsp
# goto .L26
	jmp	.L26
# t48 = 8
.L26:
	movl	$8, -316(%rbp)
# n1 = t48
	movl	-316(%rbp), %eax
	movl	%eax, -4(%rbp)
# param .LC27
# t49 = call printStr, 1
	movq	$.LC27, %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -324(%rbp)
	addq	$4, %rsp
# t50 = 1
	movl	$1, -328(%rbp)
# if n1 >= n2 goto .L27
	movl	-4(%rbp), %eax
	cmpl	-8(%rbp), %eax
	jl	.L39
	jmp	.L27
.L39:
# t50 = 0
	movl	$0, -328(%rbp)
# goto .L28
	jmp	.L28
# goto .L29
	jmp	.L29
# param .LC28
.L27:
# t51 = call printStr, 1
	movq	$.LC28, %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -336(%rbp)
	addq	$4, %rsp
# goto .L29
	jmp	.L29
# param .LC29
.L28:
# t52 = call printStr, 1
	movq	$.LC29, %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -344(%rbp)
	addq	$4, %rsp
# goto .L29
	jmp	.L29
# param .LC30
.L29:
# t53 = call printStr, 1
	movq	$.LC30, %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -352(%rbp)
	addq	$4, %rsp
# t54 = 0
	movl	$0, -356(%rbp)
# return t54
	movq	-356(%rbp), %rax
	leave
	ret
# function main ends
	leave
	ret
	.size	main, .-main
