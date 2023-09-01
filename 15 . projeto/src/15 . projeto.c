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
	enum Status{ACERTOU, ERROU, CONTINUAR};
	int x = 0;
	printf("Pressione um botao de 1 a 2");
	scanf("%d",&x);
	enum Status status;

		switch (x) {
		case 1:
			status = ACERTOU;
			printf("Você acertou, fim de jogo.\n");
			break;
		case 2:
			status = ERROU;
			printf("Você errou.\n");
			break;
		default:
			status = CONTINUAR;
			break;
		}

	while (status == ERROU) {
		printf("Você errou, tente novamente.\n");
		scanf("%d",&x);

		switch (x) {
		case 1:
			status = ACERTOU;
			printf("Certo. O jogador ganhou.");
			break;
		default:
			status = ERROU;
			break;
		}
	}
}
