test: mix_characters.c mix_word.c test.c
	gcc -o test mix_characters.c mix_word.c test.c -std=c99 -Wall
