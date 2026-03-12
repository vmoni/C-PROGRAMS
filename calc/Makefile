CC = gcc
CFLAGS = -Wall

all: app2.exe

app2.exe: main.o calc.o 
	$(CC) main.o calc.o -o app2.exe

main.o: main.c calc.h
	$(CC) $(CFLAGS) -c main.c

calc.o: calc.c calc.h
	$(CC) $(CFLAGS) -c calc.c

clean:
	del *.o app2.exe


