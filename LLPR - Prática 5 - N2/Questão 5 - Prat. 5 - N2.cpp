#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int numero[10];
	int valor_desejado;
	int valor_encontrado;
	int posicao;
	
	srand(time(NULL));
	
	for(int i = 0; i < 10; i++) {
		numero[i] = rand() % 100;
	}
	
	printf("\nValores gerados aleatoriamente:\n");
	
	for(int i = 0; i < 10; i++) {
		printf("\n%dº valor: %d\n", i + 1, numero[i]);
	}
	
	printf("\nInsira um valor desejado: ");
	scanf("%d", &valor_desejado);
	
	for(int i = 0; i < 10; i++) {
		if(valor_desejado == numero[i]) {
			 valor_encontrado = 1;
			 posicao = i;
		} 
	}
	
	if(valor_encontrado) {
		printf("\nO número %d está presente nos valores gerados na posição: %d", valor_desejado, posicao + 1);
	} else {
		printf("\nO número %d não está presente nos valores gerados em nenhuma das posições.", valor_desejado);
	}
	
	return 0;
}
