#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	int numero[10];
	int maior = -100000;
	int menor = 100000;
	int imaior;
	int imenor;
	
	for(int i = 0; i < 10; i++) {
		printf("\nInsira o %d� n�mero: ", i + 1);
		scanf("%d", &numero[i]);
		if(maior < numero[i]) {
			maior = numero[i];
			imaior = i;
		} 
		if(menor > numero[i]) {
			menor = numero[i];
			imenor = i;
		}
	}
	
	printf("\nMaior: %d | Posi��o: %d", maior, imaior + 1);
	printf("\nMenor: %d | Posi��o: %d", menor, imenor + 1);
	return 0;
}
