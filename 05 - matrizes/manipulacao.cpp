#include <stdio.h>

int main() {
	
	//Declaração da matriz
	int matriz[3][3] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};
	
	// Elemento n]ao existe
	// matriz[3][3] = 45;
	// matriz[2][0] = 70;
	
	for (int i=0; i < 3; i++) {
		for (int j=0; j < 3; j++) {
			// printf("%5i ", matriz[i][j]);
			printf("%5i ", matriz[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n");
	for (int i=0; i < 3; i++) {
		for (int j=0; j < 3; j++) {
			// printf("%5i ", matriz[i][j]);
			printf("%5i ", matriz[j][i]);
		}
		printf("\n");
	}
	
	return 0;
}
