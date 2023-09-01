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

	printf("  primeiro grupo\n");

	for(unsigned int i = 1; i<=50;++i){
		printf("%3d", 1 + (rand() % 6));

		if (i == 10) {
			printf("%s", "\n  segundo grupo\n");
		} else if (i == 20) {
			printf("%s", "\n  terceiro grupo\n");
		} else if (i == 30) {
			printf("%s", "\n  quarto grupo\n");
		} else if (i == 40) {
			printf("%s", "\n  quinto grupo\n");
		}
	}
}
