#include <stdio.h>
#include <stdlib.h>

int main() {
	int i;
	float vetor[5] = {3, 5.4, 8.2, 9.4, 7};
	
	// Atribuição
	/*
	for (i=0; i < 5; i++) {
		scanf("%i", &vetor[i]);
	}
	*/
	
	// Alteração
	/*
	vetor[2] = 4; // Alterar valor 8.2
	vetor[3] = 5.1; // Alterar valor 9.4
	*/
	
	for (i=0; i < 5; i++) {
		vetor[i] = 2*vetor[i];
	}
		
	//Impressão
	for (i=0; i < 5; i++) {
		printf("%.2f\t", vetor[i]);
	}
    
    return 0;
}
