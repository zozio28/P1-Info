exe: ecole.o main.o
	gcc ecole.o main.o -o exe

soccer.o: ecole.c ecole.h
	gcc -c -Wall ecole.c -o ecole.o

main.o: main.c ecole.h
	gcc -c -Wall main.c -o main.o

clean:
	rm -f *.o
