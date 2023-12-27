asgn4_21CS30036_21CS30011_output.txt: a.out asgn4_21CS30036_21CS30011.l asgn4_21CS30036_21CS30011.y asgn4_21CS30036_21CS30011_main.c  asgn4_21CS30036_21CS30011_test.c 
	./a.out < asgn4_21CS30036_21CS30011_test.c  > asgn4_21CS30036_21CS30011_output.txt

a.out: lex.yy.c y.tab.c asgn4_21CS30036_21CS30011_main.c 
	gcc lex.yy.c y.tab.c asgn4_21CS30036_21CS30011_main.c  -lfl

lex.yy.c: asgn4_21CS30036_21CS30011.l
	flex asgn4_21CS30036_21CS30011.l

y.tab.c: asgn4_21CS30036_21CS30011.y
	yacc -dtv asgn4_21CS30036_21CS30011.y

clean:
	rm asgn4_21CS30036_21CS30011_output.txt a.out lex.yy.c y.tab.* y.output
