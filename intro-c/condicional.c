#include <stdio.h>

int main() {
	
	int num;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	if (num % 2 == 0) {
		printf("O numero %d eh par\n", num);
	} else {
		printf("O NUMERO %d eh impar\n", num);
	}
	
	return 0;
}
