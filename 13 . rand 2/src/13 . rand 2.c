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
		unsigned int lado1 = 0;
		unsigned int lado2 = 0;
		unsigned int lado3 = 0;
		unsigned int lado4 = 0;
		unsigned int lado5 = 0;
		unsigned int lado6 = 0;

		for(unsigned int roll = 1; roll <= 100; ++roll){
			int lados = 1 + rand()%6;

			switch(lados){
				case 1:
					++lado1;
					break;
				case 2:
					++lado2;
					break;
				case 3:
					++lado3;
					break;
				case 4:
					++lado4;
					break;
				case 5:
					++lado5;
					break;
				case 6:
					++lado6;
					break;
			}
		}

		printf(" \n", "Face", "Frequency");
		printf(" 1%13u\n", lado1);
		printf(" 2%13u\n", lado2);
		printf(" 3%13u\n", lado3);
		printf(" 4%13u\n", lado4);
		printf(" 5%13u\n", lado5);
		printf(" 6%13u\n", lado6);
}
