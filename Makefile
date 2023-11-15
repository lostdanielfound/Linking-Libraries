CC = g++
CPPFLAGS = -Wall -g
PROG = CubeCalc
BINS = $(PROG) libCube.so runtime_main

all: $(BINS)

$(PROG): main.o libCube.o
	$(CC) $(CPPFLAGS) -o $@ $^

main.o: main.cpp 
	$(CC) $(CPPFLAGS) -c $^ 

libCube.o: Cube.cpp Cube.h
	$(CC) $(CPPFLAGS) -c Cube.cpp -o libCube.o

libCube.so: Cube.cpp Cube.h
	$(CC) $(CPPFLAGS) -fPIC -shared -o $@ Cube.cpp -lc

runtime_main: main.cpp
	$(CC) $(CPPFLAGS) -o $@ $^ -L. -lCube

clean: 
	rm *.o $(BINS)