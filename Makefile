rot: main.o rot.o
	$(CC) rot.o main.o -o rot

main.o: main.c
	$(CC) -c main.c -o main.o

rot.o: rot.c
	$(CC) -c rot.c -o rot.o

clean:
	rm rot 2> /dev/null
	rm *.o 2> /dev/null
