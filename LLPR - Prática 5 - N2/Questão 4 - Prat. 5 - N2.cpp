#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int pg[10];
	int razao;
	
	printf("\nInsira o valor inicial da progreção geométrica: ");
	scanf("%d", &pg[0]);
	
	printf("\nInsira o valor da raiz: ");
	scanf("%d", &razao);
	
	for(int i = 1; i < 10; i++) {
		pg[i] = pg[i - 1] * razao;
	}
	
	for(int i = 0; i < 10; i++) {
		printf("\n%d", pg[i]);
	}
	return 0;
}
