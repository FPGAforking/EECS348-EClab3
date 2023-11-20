MAIN: main.o
	g++ -std=c++20 -g -Wall main.o -o MAIN

main.o: main.cpp
	g++ -std=c++20 -g -Wall -c main.cpp

clean:
	rm *.o MAIN