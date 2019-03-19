all: Sarasas.o List_Create.o List_Add.o List_Reverse.o List_Print.o List_Remove.o
	gcc Sarasas.o List_Create.o List_Add.o List_Reverse.o List_Print.o List_Remove.o -o a.out

List_Create.o: List_Create.c
	gcc -c List_Create.c -o List_Create.o

List_Add.o: List_Add.c
	gcc -c List_Add.c -o List_Add.o

List_Reverse.o: List_Reverse.c
	gcc -c List_Reverse.c -o List_Reverse.o

List_Print.o: List_Print.c
	gcc -c List_Print.c -o List_Print.o

List_Remove.o: List_Remove.c
	gcc -c List_Remove.c -o List_Remove.o

Sarasas.o: Sarasas.c
	gcc -c Sarasas.c -o Sarasas.o

clean:
	rm *.o
