main: main.o func.o struct.o code.o
	gcc -o main main.o func.o struct.o code.o
main.o: main.c
	gcc -c main.c
func.o: func.c
	gcc -c func.c
struct.o: struct.c
	gcc -c struct.c
code.o: code.c
	gcc -c code.c
clean:
	rm -f main *.o
