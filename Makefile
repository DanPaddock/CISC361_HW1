all: mp3

mp3: main.o add.o print.o deleteArtist.o freeList.o
	gcc -g main.o add.o print.o deleteArtist.o freeList.o -o mp3

main.o: main.c
	gcc -g -c main.c

add.o: add.c
	gcc -g -c add.c

print.o: print.c
	gcc -g -c print.c

deleteArtist.o: deleteArtist.c
	gcc -g -c deleteArtist.c

freeList.o: freeList.c
	gcc -g -c freeList.c

clean:
	\rm *.o mp3
