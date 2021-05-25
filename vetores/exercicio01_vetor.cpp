/*
	Exercício 01 - Somar dois vetores de números inteiros
	
	Entrada -> dois vetores de 5 posições
	Saída -> vetor soma 
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	int i;
	int vetor1[5] = {5, 6, 7, 8, 9};
	int vetor2[5] = {1, 2, 3, 4, 5};
	int soma[5];
	
	for (i=0; i<5; i++) {
		soma[i] = vetor1[i] + vetor2[i];		
	}
	// Valor de i?
	printf("\n\ni = %i\n\n", i);
	
		
	for (i=0; i<5; i++) {
		printf("%i + %i = %i\n", vetor1[i], vetor2[i], soma[i]);		
	}
	// soma[5], vetor1[5], vetor2[5] são inválidos
    
    return 0;
}
