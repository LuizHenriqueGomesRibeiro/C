/*
 ============================================================================
 Name        : .c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	int i;
	int a = 1;
	for (i = 1; i <= 10; i++) {
		printf("The number right now is %d\n", a++);
	}

	return EXIT_SUCCESS;
}
