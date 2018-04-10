rot: main.o rot.o
	$(CC) rot.o main.o -o rot

test: test.o rot.o
	$(CC) test.o rot.o -o test

main.o: main.c
	$(CC) -c main.c -o main.o

rot.o: rot.c
	$(CC) -c rot.c -o rot.o

test.o: test.c
	$(CC) -c test.c -o test.o

clean:
	rm rot 2> /dev/null
	rm test 2> /dev/null
	rm *.o 2> /dev/null
