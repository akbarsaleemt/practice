all:= linklist
linklist: main.o createnode.o displaylist.o reverselink.o lastnode.o
	gcc main.o createnode.o displaylist.o reverselink.o lastnode.o -o linklist
main.o: main.c
	gcc -c main.c -o main.o
createnode.o: createnode.c 
	gcc -c createnode.c -o createnode.o
displaylist.o: displaylist.c
	gcc -c displaylist.c -o displaylist.o
reverselink.o:reverselink.c
	gcc -c reverselink.c -o reverselink.o

lastnode.o:lastnode.c
	gcc -c lastnode.c -o lastnode.o


clear:
	rm -rf *.o linklist

