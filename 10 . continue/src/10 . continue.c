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

		for(int p = 0; p <= 10; ++p){

			if(p == 5){
				continue;
			}

			printf("%u ", p);

		}
		printf("\nThe break statement is useful for us and this pops up in 5 (how you can see, we don´t have"
				"5 here). Can you see that?");

		return EXIT_SUCCESS;
}
