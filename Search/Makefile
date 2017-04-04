CC = /usr/bin/g++
CFLAGS = -g

search: main.o search.o
	$(CC) $(CFLAGS) -o search main.o search.o

main.o: search.h main.cpp
	$(CC) $(CFLAGS) -c main.cpp

search.o: search.h search.cpp
	$(CC) $(CFLAGS) -c search.cpp

clean:
	rm -f *.o search

