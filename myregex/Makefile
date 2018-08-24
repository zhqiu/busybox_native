lib : myregex.o
	ar crv libmyregex.a myregex.o
	-rm myregex.o

myregex.o : myregex.c
	gcc -c myregex.c

clean:
	-rm libregex.a
