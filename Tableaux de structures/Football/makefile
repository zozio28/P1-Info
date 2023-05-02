exe: soccer.o main.o
	gcc soccer.o main.o -o exe

soccer.o: soccer.c soccer.h
	gcc -c -Wall soccer.c -o soccer.o

main.o: main.c soccer.h
	gcc -c -Wall main.c -o main.o

clean:
	rm -f *.o
