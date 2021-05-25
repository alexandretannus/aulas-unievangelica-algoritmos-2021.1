#include <stdio.h>
#include <math.h>
int main(){
	int soma, x, raiz, mult;
	soma = 0;
	mult = 1;
	x = 1;	
	
	while (soma < 20 || mult < 300) {
		soma += sqrt(x);
		mult *= sqrt(x);
		printf("x: %d \t soma: %d \t mult: %d\n", x, soma, mult);
		x++;
	}
	
	return 0;
}
