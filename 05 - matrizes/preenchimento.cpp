#include <stdio.h>

int main() {
	
	int qtdLinhas = 4;
	int qtdColunas = 2;
	
	//Declaração da matriz
	float matriz[qtdLinhas][qtdColunas];
	
	//Entrada de dados
	for (int i=0; i < qtdLinhas; i++) {
		for (int j=0; j < qtdColunas; j++) {
			printf("Digite o valor da linha %i, coluna %i: ", i+1, j+1);
			scanf("%f", &matriz[i][j]);
		}
	}	
	
	// Imprimir matriz
	for (int i=0; i < qtdLinhas; i++) {
		for (int j=0; j < qtdColunas; j++) {
			printf("%.2f\t", matriz[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
