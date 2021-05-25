/*
	Exercício 2 - Somar valores de vetor
	
	Entrada - Vetor de 5 números inteiros
	Saída - vetor com a soma acumulada
*/

#include <stdio.h>

int main() {
	
	int vetor1[5] = {1,2,3,4,5};
	int soma[5]; 
	float media[5];
	int s = 0;
	float m;
	
	for (int i=0; i<5; i++) {
		s += vetor1[i];
		m = s/(i+1.0);
		soma[i] = s;
		media[i] = m;
	}
	
	for (int i=0; i<5; i++) {
		printf("%4i ", soma[i]);
	}
	printf("\n\n");
	for (int i=0; i<5; i++) {
		printf("%.3f\t", media[i]);
	}
	
	return 0;
}
