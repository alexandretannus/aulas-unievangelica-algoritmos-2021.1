#include <stdio.h>

int main() {
	int valor;
	int senhaCorreta = 32;
	
	while(1) {
		
		printf("Digite um valor inteiro positivo: ");
		scanf("%d", &valor);
		
		if (valor == 32) {
			printf("VOCE GANHOU!!!\n\n");
			break;
		}
		
		printf("Numero errado. Tente outra vez\n\n");
	}
	
}
