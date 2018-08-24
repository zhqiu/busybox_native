INCLUDES = -Ilibc/include -Ilibc/include/machine -Ilibc/include/sys

lib : os_api.o
	ar crv libos-native-newlib.a os_api.o
	-rm os_api.o

os_api.o : os_api.c
	gcc -c os_api.c

init: init.cpp
	g++ -std=c++11 init.cpp -g -o init -L. -lndl-native-newlib -lc-native-newlib -los-native-newlib

target: test_open.c
	gcc -nostdlib $(INCLUDES) test_open.c -g -o test_open -L. -lndl-native-newlib -lc-native-newlib -los-native-newlib

clean:
	-rm test_os_api
	-rm init
