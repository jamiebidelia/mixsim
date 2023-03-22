test: mix_characters.c test.c
	gcc -o test mix_characters.c test.c -std=c99 -Wall
