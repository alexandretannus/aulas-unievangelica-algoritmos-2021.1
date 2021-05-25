#include <stdio.h>

int main() {
	
	int valor;
	float real;
	double duplo;
	
	printf("%d\n", sizeof(double));
	
	// printf("Digite um valor: "); 
	// scanf("%i", &valor);
	
	// printf("Digite um valorreal: "); 
	// scanf("%f", &real);
	
	printf("Digite um valor double: "); 
	scanf("%lf", &duplo);
	
	// printf("Valor Inteiro: %i \t Valor Real: %.5f \n", valor, real);
	printf("Valor duplo: %lf", duplo);
	return 0;
}
