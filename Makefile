CFLAGS = -Wno-implicit-function-declaration

all: final
	
final: program1.o program2.o
	@echo "Linking object files"
	gcc $(CFLAGS) program1.o program2.o -o final

program1.o: program1.c
	@echo "Compiling program1.c"
	gcc $(CFLAGS) -c program1.c

program2.o: program2.c
	@echo "Compiling program2.c"
	gcc $(CFLAGS) -c program2.c

clean: 
	@echo "Removing everything but the source files"
	rm -f *.o final