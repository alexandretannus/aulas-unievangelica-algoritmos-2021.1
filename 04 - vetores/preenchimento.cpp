#include <stdio.h>
#include <stdlib.h>

int main() {
	int i;
	float vetor[5];
	
	for (i=0; i < 5; i++) {
		scanf("%i", &vetor[i]);
	}
	/*
	scanf("%f", &vetor[0]);
	scanf("%f", &vetor[1]);
	scanf("%f", &vetor[2]);
	scanf("%f", &vetor[3]);
	scanf("%f", &vetor[4]);
	*/
		
	for (int i=0; i < 5; i++) {
		printf("%i\t", vetor[i]);
	}
    
    return 0;
}
