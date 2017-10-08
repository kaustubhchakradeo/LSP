INCLUDEDIR = ../Include
#key value pair
STATIC_LIB = libmath.a

DYNAMIC_LIB = libmath.so

all :$(STATIC_LIB) $(DYNAMIC_LIB)
#2 dependencies STATIC_LIB and DYNAMIC_LIB

$(STATIC_LIB): math.o stat.o
#STATIC_LIB will be created after math.o and stat.o are created, control transfered to line 12and 15
	ar -rcs $(STATIC_LIB) math.o stat.o			

$(DYNAMIC_LIB): math.o stat.o
	gcc -shared -FPIC -o $(DYNAMIC_LIB) math.o stat.o
#create shared library from given files, create dependency FPIC:Fixed Position indepent code

math.o : math.c
	gcc -I $(INCLUDEDIR) -c math.c -o math.o

stat.o : stat.c
	gcc -I $(INCLUDEDIR) -c stat.c -o stat.o

clean:
	rm -vf *.o $(STATIC_LIB) $(DYNAMIC_LIB)

