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

	int Luiz = 0;
	int Gustavo = 0;
	int Amanda = 0;
	int Maria = 0;

	printf("Enter with the each student success in the grade:");
	printf("(Or press EOF for end the interaction)");
	int grade;

	while ((grade = getchar()) != EOF){
		switch (grade) {
			case 'L':
			case 'l':
				++Luiz;
			break;
			case 'G':
			case 'g':
				++Gustavo;
			break;
			case 'A':
			case 'a':
				++Amanda;
			break;
			case 'M':
			case 'm':
				++Maria;
			break;
			case '\n':
			case '\t':
			case ' ':
			break;

			default:
				printf("Enter another value, this one it´s not valid");
				break;
		}
	}

	printf("\nTotals for each letter grade are:\n");
	printf("Luiz: %u\n", Luiz);
	printf("Gustavo: %u\n", Gustavo);
	printf("Amanda: %u\n", Amanda);
	printf("Maria: %u\n", Maria);

	return EXIT_SUCCESS;
}

