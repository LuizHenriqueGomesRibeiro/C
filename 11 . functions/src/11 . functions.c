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

	for(int x = 1; x <= 10; ++x){
		printf("%d somado dez e multiplicado por dez é %d\n", x, soma(x));
	}
}

int soma(int y){
	int s = y + 10;
	return multiplicacao(s);
	}

int multiplicacao(int z){
	int m = z*10;
	return m;
}
