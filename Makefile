CFLAGS = -Wno-implicit-function-declaration

all: final
	
final: program1.o main.o operators.o arrays_and_strings.o
	@echo "Linking object files"
	gcc $(CFLAGS) program1.o main.o operators.o arrays_and_strings.o -o final

program1.o: program1.c
	@echo "Compiling program1.c"
	gcc $(CFLAGS) -c program1.c

main.o: main.c
	@echo "Compiling main.c"
	gcc $(CFLAGS) -c main.c

operators.o: operators.c
	@echo "Compiling operators.c"
	gcc $(CFLAGS) -c operators.c

arrays_and_strings.o: arrays_and_strings.c
	@echo "Compiling arrays_and_strings.c"
	gcc $(CFLAGS) -c arrays_and_strings.c

clean: 
	@echo "Removing everything but the source files"
	rm -f *.o final