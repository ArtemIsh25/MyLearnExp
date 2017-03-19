CC=gcc
CFLAGS= -O0 -g3 -Wall -fmessage-length=0
SOURCE= source
BINARY= bin
all: hello.exe
 
hello.exe: main.o
	$(CC) -o bin/hello bin/main.o

main.o: $(SOURCE)/main.c
	$(CC) $(CFLAGS) -c $(SOURCE)/main.c -o $(BINARY)/main.o
clean:
	rm $(BINARY)/main.o $(BINARY)/hello.exe