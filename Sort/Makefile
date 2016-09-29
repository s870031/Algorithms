CC = /usr/bin/g++
CFLAGS = 
LIBS = -lm

sort: main.o sort.o
	$(CC) $(CFLAGS) -o sort main.o sort.o

main.o: sort.h main.cpp
	$(CC) $(CFLAGS) -c main.cpp

sort.o: sort.h sort.cpp
	$(CC) $(CFLAGS) -c sort.cpp

clean: 
	rm -f *.o sort
