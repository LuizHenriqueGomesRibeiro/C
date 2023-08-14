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

	unsigned int passes = 0;
	unsigned int failures = 0;
	unsigned int student = 1;
	unsigned int result;

	while(student<=10){
		printf("%s","Enter with result: '1 for passed' and '2 for don´t passed':\n");
		int validInput = scanf("%d", &result);

		if (validInput != 1) {
			printf("Invalid kind of input. Please, enter a valid value.\n");
			while (getchar() != '\n');
			continue;
		}

		if(result == 1){
			passes = passes + 1;
			student = student + 1;
		}else if(result == 2){
			failures = failures + 1;
			student = student + 1;
		}else{
			printf("Enter with valid values, please\n");
		}
	}

	printf("Passed %u\n", passes);
	printf("Failed %u\n", failures);

	if(8 <= passes){
		printf("It's a good students grade\n");
	}

	return EXIT_SUCCESS;
}
