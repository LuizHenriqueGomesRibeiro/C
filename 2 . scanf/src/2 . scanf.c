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
	int integer1;
	int integer2;

	printf("Este é um programa simples de teste de scanf\nEscreva um número inteiro:");

	scanf("%d",&integer1);
	printf("Escreva um segundo número inteiro:");

	scanf("%d",&integer2);

	int soma;

	soma = integer1 + integer2;

	printf("A soma dos dois números é: %d",soma);
	return EXIT_SUCCESS;
}
