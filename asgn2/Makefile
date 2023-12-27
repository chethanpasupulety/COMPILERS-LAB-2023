CC = gcc

a.out: main.o libass2_21CS30036.a
	$(CC) main.o -L. -lass2_21CS30036

main.o: main.c myl.h
	$(CC) -Wall -c main.c

libass2_21CS30036.a: ass2_21CS30036.o
	ar -rcs libass2_21CS30036.a ass2_21CS30036.o

ass2_21CS30036.o: ass2_21CS30036.c myl.h
	$(CC) -Wall -c ass2_21CS30036.c

clean:
	rm main.o libass2_21CS30036.a ass2_21CS30036.o a.out
