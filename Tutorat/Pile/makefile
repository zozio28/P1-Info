exe: pile.o tutorat.o
	gcc pile.o tutorat.o -o exe
fonctions.o: pile.c pile.h
	gcc -c -Wall pile.c  -o pile.o
main.o: tutorat.c pile.h
	gcc -c -Wall tutorat.c -o tutorat.o
clean:
	rm -f *.o
