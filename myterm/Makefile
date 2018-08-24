lib : myterm.o
	ar crv libmyterm.a myterm.o
	-rm myterm.o

myterm.o : myterm.c
	gcc -c myterm.c

clean:
	-rm libmyterm.a
