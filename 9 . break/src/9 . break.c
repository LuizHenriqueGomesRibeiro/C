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

	for(int p = 0; p < 10; ++p){

		printf("%u\n", p);

		if(p == 2){
			break;
		}

	}
	printf("The break statement is useful for us. Can you see that?");

	return EXIT_SUCCESS;
}
