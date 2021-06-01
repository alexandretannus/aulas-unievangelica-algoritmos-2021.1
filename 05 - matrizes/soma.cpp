#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
	
	srand(time(NULL)); 
	int qtdLinhas = 4;
	int qtdColunas = 4;
	
	//Declaração da matriz
	int matriz[qtdLinhas][qtdColunas];
	int matriz2[qtdLinhas][qtdColunas];
	int soma[qtdLinhas][qtdColunas];
	
	//Entrada de dados
	for (int i=0; i < qtdLinhas; i++) {
		for (int j=0; j < qtdColunas; j++) {
			matriz[i][j] = rand() % 10;
			matriz2[i][j] = rand() % 10;
			soma[i][j] = matriz[i][j] + matriz2[i][j];
		}
	}	
	
	
	printf("Matriz 1\n");
	// Imprimir matriz
	for (int i=0; i < qtdLinhas; i++) {
		for (int j=0; j < qtdColunas; j++) {
			printf("%4i\t", matriz[i][j]);
		}
		printf("\n");
	} 
	
	printf("\n\n");
	// Imprimir matriz 2
	printf("Matriz 2\n");
	for (int i=0; i < qtdLinhas; i++) {
		for (int j=0; j < qtdColunas; j++) {
			printf("%4i\t", matriz2[i][j]);
		}
		printf("\n");
	}	
	
	printf("\n\n");
	// Imprimir matriz
	printf("Matriz Soma\n");
	for (int i=0; i < qtdLinhas; i++) {
		for (int j=0; j < qtdColunas; j++) {
			printf("%4i\t", soma[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
