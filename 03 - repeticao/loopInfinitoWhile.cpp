#include <stdio.h>
#include <math.h>
int main(){
	int soma, x, raiz, mult;
	soma = 0;
	mult = 1;
	x = 1;	
	
	while (-1) {
		soma += sqrt(x); // soma = 1
		mult *= sqrt(x); // mult = 1
		printf("x: %d \t soma: %d \t mult: %d\n", x, soma, mult);
		x++;
		
		if (soma > 20 || mult > 300) {
			break;
		}
	}
	
	return 0;
}
