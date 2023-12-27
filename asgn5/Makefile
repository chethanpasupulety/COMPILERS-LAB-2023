a.out: lex.yy.o ass5_21CS30011_21CS30036.tab.o ass5_21CS30011_21CS30036_translator.o
	g++ lex.yy.o ass5_21CS30011_21CS30036.tab.o ass5_21CS30011_21CS30036_translator.o -lfl

ass5_21CS30011_21CS30036_translator.o: ass5_21CS30011_21CS30036_translator.h ass5_21CS30011_21CS30036_translator.cxx
	g++ -c ass5_21CS30011_21CS30036_translator.h
	g++ -c ass5_21CS30011_21CS30036_translator.cxx

lex.yy.o: lex.yy.c
	g++ -c lex.yy.c

ass5_21CS30011_21CS30036.tab.o: ass5_21CS30011_21CS30036.tab.c
	g++ -c ass5_21CS30011_21CS30036.tab.c

lex.yy.c: ass5_21CS30011_21CS30036.l ass5_21CS30011_21CS30036.tab.h ass5_21CS30011_21CS30036_translator.h
	flex ass5_21CS30011_21CS30036.l 
	
ass5_21CS30011_21CS30036.tab.c: ass5_21CS30011_21CS30036.y
	bison -dtv ass5_21CS30011_21CS30036.y

ass5_21CS30011_21CS30036.tab.h: ass5_21CS30011_21CS30036.y
	bison -dtv ass5_21CS30011_21CS30036.y																		


test: a.out
	./a.out < ass5_21CS30036_test1.c > ass5_21CS30036_quads1.out
	./a.out < ass5_21CS30036_test2.c > ass5_21CS30036_quads2.out
	./a.out < ass5_21CS30036_test3.c > ass5_21CS30036_quads3.out
	./a.out < ass5_21CS30036_test4.c > ass5_21CS30036_quads4.out
	./a.out < ass5_21CS30036_test5.c > ass5_21CS30036_quads5.out


clean:
	rm -f lex.yy.c *.tab.c *.tab.h *.output *.o a.out *.gch *_quads*.out