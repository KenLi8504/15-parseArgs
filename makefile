all: main.o
	gcc -o main main.o

main.o: main.c
	gcc -c main.c

run:
	../program
clean:
	rm main.o
	rm main
