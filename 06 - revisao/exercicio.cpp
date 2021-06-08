#include <stdio.h>

void imprimirVetor(int vetor[], int tamanho) {
	for (int i=0; i < tamanho; i++) {
		printf("%i \t", vetor[i]);
	}
	printf("\n");
}

int main() {
	
	int A[3] = {3, 7, 5};
	int B[5] = {4, 6, 10, 18, 20};
	int C[8];
	
	int Ia = 0, Ib = 0, Ic = 0, Na = 3, Nb = 5, cont = 0,  i = 0;
	
	while (Ia < Na && Ib < Nb) {
		if (A[Ia] <= B[Ib]) {
			C[Ic] = A[Ia];
			Ia += 1;
			// Ia++;
			// Ia = Ia + 1;
		} else {
			C[Ic] = B[Ib];
			Ib += 1;
		}
		
		Ic += 1;
		cont += 1;
	}
	printf("cont = %i\n", cont);
	/*
	for (i=Ia; Ia < Na; i++) {
		C[Ic] = A[i];
		Ic += 1;
	}
	*/
	printf("Vetor A\n");
	imprimirVetor(A, 3);
	
	printf("Vetor B\n");
	imprimirVetor(B, 5);
	
	printf("Vetor C\n");
	imprimirVetor(C, 8);
	
}


