#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int pa[10];
	int razao;
	
	printf("\nInsira o valor inicial da progreção aritmética: ");
	scanf("%d", &pa[0]);
	
	printf("\nInsira o valor da razão: ");
	scanf("%d", &razao);
	
	for(int i = 1; i < 10; i++) {
		pa[i] = pa[i - 1] + razao;
	}
	
	for(int i = 0; i < 10; i++) {
		printf("\n%d", pa[i]);
	}
	return 0;
}
