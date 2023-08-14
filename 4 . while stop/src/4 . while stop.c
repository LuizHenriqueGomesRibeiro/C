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
	printf("Eu, programa while c, estou aqui\n");

	unsigned int counter;
	int grade;
	int total;
	float average;

	total = 0;
	counter = 0;

	printf("%s","Entre com a nota, ou -1 para acabar.");
	scanf("%d", &grade);

	while(grade != -1){

		total = total + grade;
		counter = counter + 1;

		printf("%s","Entre com a nota, ou -1 para acabar.");
		scanf("%d", &grade);
	}

	if(counter != 0){
		average = (float) total/counter;

		printf("A média da classe é: %.2f",average);
	}else{
		printf("Nenhum valor foi entrado");
	}

	return EXIT_SUCCESS;
}
