exe: testUnitaires.o Pioupiou.o
	gcc testUnitaires.o Pioupiou.o -o exe

soccer.o: testUnitaires.c testUnitaires.h
	gcc -c -Wall testUnitaires.c -o testUnitaires.o

main.o: Pioupiou.c testUnitaires.h
	gcc -c -Wall Pioupiou.c -o Pioupiou.o

clean:
	rm -f *.o
