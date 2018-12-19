all:dupword
dupword: main.o openfiles.o compare.o
	gcc  main.o openfiles.o compare.o -o dupword
main.o: main.c
	gcc -c main.c -o main.o
openfiles.o:openfiles.c
	gcc -c openfiles.c -o openfiles.o
compare.o:compare.c
	gcc -c compare.c -o compare.o
clean:
	rm -rf *.o dupword
