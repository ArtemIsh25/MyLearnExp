CC=gcc
CFLAGS= -O0 -g3 -Wall -c -fmessage-length=0

all: hello.exe
 
hello.exe: main.o
	$(CC) -o hello main.o

main.o: main.c
	$(CC) $(CFLAGS) main.c
clean:
	echo 
	rm main.o hello.exe
	echo 