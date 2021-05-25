#include <stdio.h>

int main() {
	float nota;
	float soma;
	int qtdNotas;
	
	printf("Digite quantidade de notas: ");
	scanf("%d", &qtdNotas);
	
	for (int i=0; i<qtdNotas; i++) {
		while (true) {
			
			printf("Digite a nota %d: ", i+1);
			scanf("%d", &nota);
			if (nota >= 0 && nota <= 10){
				printf("Nota valida\n\n");				
				soma += nota;
				break;
			} else {
				printf("Nota invalida\n\n");				
			}		
		}		
		
	}
	
	printf("Media final: %.2f", soma/qtdNotas);
	
	
	return 0;
}
