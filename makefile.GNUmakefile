CC=g++
FLAGS=-c -std=c++14 -Wall -Werror

all: lab1

lab1: main.o swap.o
	$(CC) main.o swap.o -o lab1

main.o: main.cpp
	$(CC) $(FLAGS) main.cpp

swap.o: swap.cpp
	$(CC) $(FLAGS) swap.cpp

clean:
	rm -rf *.o lab1