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
	int a = 1;
	for (int i = 1; i <= 10; i++) {
		printf("The number right now is %d\n", a++);
	}

	int sum = 0;
	// let´s sum the values of the integers between 2 and 100.
	for(int i = 2; i <= 100; i = i + 2){
		sum += i;
	}

	printf("The sum is: %d",sum);

	return EXIT_SUCCESS;
}
