/*
	Used for using multiple files
*/


INCLUDE = ../Include
TARGET = Mathuser
all :$(TARGET)

$(TARGET): main.c printresult.c ../Libmath/math.c
	gcc -save-temps  -I../Include/ main.c printresult.c ../Libmath/math.c -o $(TARGET)

clean:
	rm -vf *.o *.i *.s $(TARGET)
