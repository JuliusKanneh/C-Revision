CFLAGS = -Wno-implicit-function-declaration

all: final
	
final: program1.o main.o
	@echo "Linking object files"
	gcc $(CFLAGS) program1.o main.o -o final

program1.o: program1.c
	@echo "Compiling program1.c"
	gcc $(CFLAGS) -c program1.c

main.o: main.c
	@echo "Compiling main.c"
	gcc $(CFLAGS) -c main.c

clean: 
	@echo "Removing everything but the source files"
	rm -f *.o final