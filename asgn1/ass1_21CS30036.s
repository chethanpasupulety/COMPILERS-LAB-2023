	.file	"code.c"						    # source file name
	
# ###############    calculateFrequency	funtion ####################

	.text										# code starting
	.globl	calculateFrequency					# calculateFrequency is global
	.type	calculateFrequency, @function		# calculateFrequency is a function
calculateFrequency:								# calculateFrequency: starts

.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp								# old base pointer is pushed to the stack
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp							# base pointer set to the new stack pointer
	.cfi_def_cfa_register 6
	movq	%rdi, -24(%rbp)						# storing the arr1 pointer argument to the stack after allocating space for i,j,ctr in the stack. M[rbp-24]=arr1,M[rbp-12]=i,M[rbp-8]=j,M[rbp-4]=ctr
	movl	%esi, -28(%rbp)						# storing the least significant 32 bits of n to the stack after arr1 pointer. M[rbp-28]=n
	movq	%rdx, -40(%rbp)						# storing 3rd argument fr1 pointer to stack. M[rbp-40]=fr1
	movl	$0, -12(%rbp)						# i initialize to 0(32 bits)
	jmp	.L2  									# going to.L2

.L7:											# first for loop entered			
	movl	$1, -4(%rbp)						# ctr initialised to 1 .M[rbp-4]=ctr=1
	movl	-12(%rbp), %eax						# i moved to register eax .%eax=M[rbp-12]=i
	addl	$1, %eax							# eax=eax+1 ==> eax=i+1
	movl	%eax, -8(%rbp)						# j initialized to eax (i+1)
	jmp	.L3										# go to level .L3


.L5:											# 2nd for loop entered.if(arr1[i]==arr1[j]) part
	movl	-12(%rbp), %eax						# i moved to registar eax
	cltq										# 32-bit value in %eax is properly extended to 64 bits	
	leaq	0(,%rax,4), %rdx					# load effective address instruction which loads 4*(%rax) value and stores in rdx. %rdx=4*i
	movq	-24(%rbp), %rax						# arr1 pointer moved to rax
	addq	%rdx, %rax							# rax=&(arr1+4*(i))
	movl	(%rax), %edx						# value of arr1[i] moved to edx. %edx=arr[i]
	movl	-8(%rbp), %eax						# j moved to register eax. %eax=j
	cltq										# 32-bit value in %eax is properly extended to 64 bits	
	leaq	0(,%rax,4), %rcx					# load effective address instruction which loads 4*($rax) value and stores in rcx. %rcx=4*j
	movq	-24(%rbp), %rax						# arr1 pointer moved to rax. %rax=arr1
	addq	%rcx, %rax							# %rax=%rax+%rcx. %rax=arr1+4*j
	movl	(%rax), %eax						# %eax=arr1[j]
	cmpl	%eax, %edx							# comparing eax=arr1[j] and ex=arr1[i]
	jne	.L4										# if arr1[i]!=arr1[j] jump to level .L4. => j++
	addl	$1, -4(%rbp)						# else ctr=ctr+1.Increasing the counter for that element
	movl	-8(%rbp), %eax						# move j to eax. %eax=j
	cltq										# 32-bit value in %eax is properly extended to 64 bits	
	leaq	0(,%rax,4), %rdx					# load effective address instruction which loads 4*($rax) value and stores in rdx. %rdx=4*j
	movq	-40(%rbp), %rax						# fr1 pointer moved to rax.
	addq	%rdx, %rax							# $rax=$rax+$rdx. %rax=fr1+4*j
	movl	$0, (%rax)							# move 0 to the value pointed by the address in rax. fr1[j]=0 .Setting the frequency of duplicate elements to 0

.L4:											# 2nd for loop incrementer part
	addl	$1, -8(%rbp)						# j=j+1

.L3:											# 2nd for loop begins		
	movl	-8(%rbp), %eax						# j moved to register eax
	cmpl	-28(%rbp), %eax						# comparing j to n 
	jl	.L5										# if j<n jump to level .L5
	movl	-12(%rbp), %eax						# else move i to register eax. %eax=i
	cltq										# 32-bit value in %eax is properly extended to 64 bits					
	leaq	0(,%rax,4), %rdx					# load effective address instruction which loads 4*(%rax) value and stores in rdx. %rdx=4*i		
	movq	-40(%rbp), %rax						# fr1 pointer moved to %rax. %rax=fr1
	addq	%rdx, %rax							# %rax=%rax+%rdx. %rax=fr1+4*i. rax stores pointer to fr1[i]
	movl	(%rax), %eax						# value pointed by rax register moved to eax. %eax=fr1[i]
	testl	%eax, %eax							# check for fr1[i]==0
	je	.L6										# if fr1[i]==0 start the 1st loop again and go to level .L6.i++
	movl	-12(%rbp), %eax						# else if fr1[i]!=0, move i to eax. %eax=i
	cltq										# 32-bit value in %eax is properly extended to 64 bits	
	leaq	0(,%rax,4), %rdx					# load effective address instruction which loads 4*(%rax) value and stores in rdx. %rdx=4*i	
	movq	-40(%rbp), %rax						# fr1 pointer moved to %rax. %rax=fr1
	addq	%rax, %rdx							# %rdx=%rdx+%rax. %rax=fr1+4*i. rdx stores pointer to fr1[i]
	movl	-4(%rbp), %eax						# moving ctr to %eax. %eax=ctr
	movl	%eax, (%rdx)						# moving ctr in eax to the memory location stored in rdx. fr1[i]=ctr

.L6:											# 1st for loop iterator incrementor
	addl	$1, -12(%rbp)						# i=i+1

.L2:											# 1st for loop begins
	movl	-12(%rbp), %eax						# i moved to register eax
	cmpl	-28(%rbp), %eax						# i compared to n 
	jl	.L7										# if i<n jump to .L7
	nop											# else no operation
	nop
	popq	%rbp								# previous base pointer restored by popping from the stack
	.cfi_def_cfa 7, 8
	ret											# function returned
	.cfi_endproc
	
.LFE0:
	.size	calculateFrequency, .-calculateFrequency
	.section	.rodata


# ############### printArrayWithFrequency funtion ####################

.LC0:											# Label for the 1st printf
	.string	"Element\tFrequency"
.LC1:											# Label for the 2nd printf
	.string	"%d\t%d\n"
	
	
	.text										# code for printArrayWithFrequency starts
	.globl	printArrayWithFrequency				# printArrayWithFrequency is global
	.type	printArrayWithFrequency, @function  # printArrayWithFrequency is a function
printArrayWithFrequency:
.LFB1:
	.cfi_startproc								
	endbr64
	pushq	%rbp								# old base pointer is pushed to the stack
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp							# base pointer set to the new stack pointer
	.cfi_def_cfa_register 6
	subq	$48, %rsp							# Allocating 48 bytes for local variables.
	movq	%rdi, -24(%rbp)						# storing the 1st argument arr1 pointer to the stack. M[rbp-24]=arr1
	movq	%rsi, -32(%rbp)						# storing the 2nd argument fr1 pointer to the stack. M[rbp-32]=fr1
	movl	%edx, -36(%rbp)						# storing the 3rd argument n to the stack. M[rbp-36]=n
	leaq	.LC0(%rip), %rax					# loading the adress of "Element\tFrequency" to rax 
	movq	%rax, %rdi							# moving the address to rdi which acts as a 1st parameter to printf funtion call
	call	puts@PLT							# calls the printf function to print "Element\tFrequency"
	movl	$0, -4(%rbp)						# i initialised to 0.
	jmp	.L9										# jump to level .L9.

.L11:											# into the for loop after i<n
	movl	-4(%rbp), %eax						# i moved into eax. %eax=i
	cltq										# 32-bit value in %eax is properly extended to 64 bits	
	leaq	0(,%rax,4), %rdx					# load effective address instruction which loads 4*(%rax) value and stores in rdx. %rdx=4*i
	movq	-32(%rbp), %rax						# fr1 pointer moved to %rax. %rax=fr1
	addq	%rdx, %rax							# %rax=%rax+%rdx. => %rax=fr1+4*i. %rax holds address to fr1[i]
	movl	(%rax), %eax						# moving the value pointed out by adress in rax to eax. %eax=fr1[i]
	testl	%eax, %eax							# check if fr1[i]==0
	je	.L10									# if fr1[i]==0 jump to level .L10
	movl	-4(%rbp), %eax						# else if fr1[i]!=0, moving i to eax. %eax=i
	cltq										# 32-bit value in %eax is properly extended to 64 bits	
	leaq	0(,%rax,4), %rdx					# load effective address instruction which loads 4*(%rax) value and stores in rdx. %rdx=4*i
	movq	-32(%rbp), %rax						# moving the fr1 pointer to rax. %rax=fr1
	addq	%rdx, %rax							# %rax=%rax+%rdx. => %rax=fr1+4*i. %rax holds address to fr1[i]
	movl	(%rax), %edx						# moving the value pointed out by adress in rax to edx. %edx=fr1[i] .This is passed as the 3rd argument to the printf function
	movl	-4(%rbp), %eax						# moving i to eax. %eax=i
	cltq										# 32-bit value in %eax is properly extended to 64 bits	
	leaq	0(,%rax,4), %rcx					# load effective address instruction which loads 4*(%rax) value and stores in rcx. %rcx=4*i
	movq	-24(%rbp), %rax						# moving the arr1 pointer to rax. %rax=arr1
	addq	%rcx, %rax							# %rax=%rax+%rcx. => %rax=arr1+4*i. %rax holds address to arr1[i]
	movl	(%rax), %eax						# moving the value pointed out by address in rax to eax. %eax=arr1[i]
	movl	%eax, %esi							# moving arr1[i] to esi to pass it as a 2nd argument to printf.
	leaq	.LC1(%rip), %rax					# loading the adress of "%d\t%d\n" to rax 
	movq	%rax, %rdi							# moving the address to rdi which acts as the 1st parameter to printf funtion call
	movl	$0, %eax				
	call	printf@PLT							# calling the printf function to print the frequencies

.L10:											# for loop iterator increment
	addl	$1, -4(%rbp)						# i=i+1

.L9:											# for loop condition check begins
	movl	-4(%rbp), %eax						# i=M[rbp-4] moved to register eax.=> %eax=i
	cmpl	-36(%rbp), %eax						# M[rbp-36]=n is compared with i.
	jl	.L11									# if (i<n) jump to level .L11.
	nop											# else no operation
	nop
	leave										# function ending as i reaches n+1
	.cfi_def_cfa 7, 8
	ret											# funtion returns
	.cfi_endproc
.LFE1:
	.size	printArrayWithFrequency, .-printArrayWithFrequency
	.section	.rodata
	.align 8


# ############### Main funtion ####################

.LC2:																		# Label for the 1st printf
	.string	"\n\nCount frequency of each integer element of an array:"
	.align 8

.LC3:																		# Label for the 2nd printf
	.string	"------------------------------------------------"
	.align 8

.LC4:																		# Label for the 3rd printf
	.string	"Input the number of elements to be stored in the array :"

.LC5:																		# Label for the scanf
	.string	"%d"
	.align 8

.LC6:																		# Label for the 4th printf
	.string	"Enter each elements separated by space: "


	.text																	# code starts
	.globl	main															# main is global
	.type	main, @function													# main is a function
main:


.LFB2:
	.cfi_startproc
	endbr64
	pushq	%rbp															# old base pointer is pushed to the stack
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp														# base pointer set to the new stack pointer
	.cfi_def_cfa_register 6
	subq	$832, %rsp														# Allocating 832 bytes for local variables.
	movq	%fs:40, %rax													# Getting value from the (TLS) at offset 40 and storing it in rax.
	movq	%rax, -8(%rbp)													# M[rbp-8]=(%rax)
	xorl	%eax, %eax														# %eax=0
	leaq	.LC2(%rip), %rax												# loading the adress of .LC2 to rax 
	movq	%rax, %rdi														# moving the address to rdi which acts as the 1st parameter to printf funtion call
	call	puts@PLT														# calling printf to print "\n\nCount frequency of each integer element of an array:"
	leaq	.LC3(%rip), %rax												# loading the adress of .LC3 to rax
	movq	%rax, %rdi														# moving the address to rdi which acts as the 1st parameter to printf funtion call
	call	puts@PLT														# calling printf to print "------------------------------------------------"
	leaq	.LC4(%rip), %rax												# loading the adress of .LC4 to rax
	movq	%rax, %rdi                                     					# moving the address to rdi which acts as the 1st parameter to printf funtion call
	movl	$0, %eax														# %eax=0
	call	printf@PLT														# calling printf to print "Input the number of elements to be stored in the array :"
	leaq	-828(%rbp), %rax												# loading the address of n to rax. %rax=&n
	movq	%rax, %rsi														# moving value in rax to tsi to pass as the 2nd parameter to scanf. %rsi=&n
	leaq	.LC5(%rip), %rax												# loading the address of .LC5 to rax
	movq	%rax, %rdi														# moving the address to rdi which acts as the 1st parameter to scanf funtion call
	movl	$0, %eax														# %eax back to 0.
	call	__isoc99_scanf@PLT												# scanf called. "%d",&n passed as parameters
	leaq	.LC6(%rip), %rax												# loading the address of .LC6 to rax
	movq	%rax, %rdi														# moving the address to rdi which acts as the 1st parameter to printf funtion call
	movl	$0, %eax														# %eax back to 0.
	call	printf@PLT														# printf called to print "Enter each elements separated by space: "
	movl	$0, -824(%rbp)													# M[rbp-824] which is i is initialized to 0. i=0
	jmp	.L13																# jump to level .L13

.L14:																		# for loop for scanning begins
	leaq	-816(%rbp), %rdx												# loads the address in M[rbp-816] which is the arr1 pointer and stores in rdx. %rdx=arr1
	movl	-824(%rbp), %eax												# i loaded to eax. %eax=i
	cltq																	# 32-bit value in %eax is properly extended to 64 bits	
	salq	$2, %rax														# left shift by 2 bits done to %rax. => %rax=4*i
	addq	%rdx, %rax														# %rax= %rax+%rdx. %rax=arr1 +4*i. => %rax=&arr1[i]
	movq	%rax, %rsi														# %rsi=&arr1[i] which is the 2nd parameter for the scanf funtion call.
	leaq	.LC5(%rip), %rax												# loading the address of .LC5 to rax		
	movq	%rax, %rdi														# moving the address to rdi which acts as the 1st parameter to scanf funtion call
	movl	$0, %eax														# %eax =0
	call	__isoc99_scanf@PLT												# scanf function called
	addl	$1, -824(%rbp)													# i=i+1

.L13:																		# iterator checking. if i<n for the 1st for loop
	movl	-828(%rbp), %eax												# n moved to eax. %eax=n
	cmpl	%eax, -824(%rbp)												# i compared to n
	jl	.L14																# if (i<n) jump to level .L14
	movl	$0, -820(%rbp)													# else initialize newly created i to 0. M[rbp-820]=0
	jmp	.L15																# jump to level .L15


.L16:										# 2nd for loop starts
	movl	-820(%rbp), %eax				# i moved to eax. %eax=i
	cltq									# 32-bit value in %eax is properly extended to 64 bits	
	movl	$-1, -416(%rbp,%rax,4)			# -1 moved to the address (%rbp +4*%rax-416). M[rbp-416]=fr1.=> *(fr1+ 4*i)=-1. => fr1[i]=-1
	addl	$1, -820(%rbp)					# i=i+1

.L15:										# iterator checking. if i<n for the 2nd for loop
	movl	-828(%rbp), %eax				# n moved to eax. %eax=n
	cmpl	%eax, -820(%rbp)				# i compared to n
	jl	.L16								# if (i<n) jump to level .L16
	movl	-828(%rbp), %ecx				# else the loop finishes and n moved to ecx. %ecx=n										
	leaq	-416(%rbp), %rdx				# fr1 pointer loaded to rdx. %rdx=fr1
	leaq	-816(%rbp), %rax				# arr1 pointer loaded to rax. %rax=arr1
	movl	%ecx, %esi						# moving n to %esi to pass it as 2nd argument in the calculateFreq fn. %esi=n
	movq	%rax, %rdi						# moving arr1 pointer to rdi to pass it as 1st argument to calculateFreq fn. %rdi=arr1
	call	calculateFrequency				# calling the calculateFrequency  fn

	movl	-828(%rbp), %edx				# n moved to ecx. %edx=n	
	leaq	-416(%rbp), %rcx				# fr1 pointer loaded to rcx. %rcx=fr1
	leaq	-816(%rbp), %rax				# arr1 pointer loaded to rax. %rax=arr1
	movq	%rcx, %rsi						# moving fr1 pointer to rsi to pass it as 2nd argument to printarrayFreq fn. %rsi=fr1
	movq	%rax, %rdi						# moving arr1 pointer to rdi to pass it as 1st argument to printarrayFreqfn. %rdi=arr1
	call	printArrayWithFrequency			# calling printArrayWithFrequency	fn
	movl	$0, %eax						# %eax set back to 0.


	movq	-8(%rbp), %rdx					# %rdx=M[rbp-8]
	subq	%fs:40, %rdx					# %rdx=M[rbp-8]-(value from the (TLS) at offset 40) 
	je	.L18								# if %rdx==0 jump to level .L18
	call	__stack_chk_fail@PLT			# else call the __stack_chk_fail function.
.L18:
	leave									# remove the stack frame
	.cfi_def_cfa 7, 8
	ret										# return
	.cfi_endproc
.LFE2:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 11.3.0-1ubuntu1~22.04) 11.3.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	1f - 0f
	.long	4f - 1f
	.long	5
0:
	.string	"GNU"
1:
	.align 8
	.long	0xc0000002
	.long	3f - 2f
2:
	.long	0x3
3:
	.align 8
4:
