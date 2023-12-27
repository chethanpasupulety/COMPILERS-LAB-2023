output.txt: a.out ass3_21CS30011_21CS30036_test.c
	./a.out < ass3_21CS30011_21CS30036_test.c > output.txt

a.out: lex.yy.c ass3_21CS30011_21CS30036.c
	cc lex.yy.c ass3_21CS30011_21CS30036.c -lfl


lex.yy.c: ass3_21CS30011_21CS30036.l 
	flex ass3_21CS30011_21CS30036.l 

ass3_21CS30011_21CS30036.c:
	touch ass3_21CS30011_21CS30036.c

clean:
	rm a.out lex.yy.c output.txt
