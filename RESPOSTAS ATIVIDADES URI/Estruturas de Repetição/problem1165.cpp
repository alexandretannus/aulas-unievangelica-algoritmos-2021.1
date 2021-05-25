/* 
    URI Online Judge 
    Problema 1165 - Número Primo
    https://www.urionlinejudge.com.br/repository/UOJ_1165.html
 */

#include <stdio.h>
#include <math.h>

int main() {
    int casos, num, raiz, primo;

    scanf("%d", &casos);

    for (int i=0; i<casos; i++) {
    	primo = 1;
        scanf("%d", &num);

        raiz = sqrt(num);

        for (int j=2; j < raiz+1; j++) {
            if (num % j == 0) {            	
                primo = 0;
                break;
			}
        }

        if (primo == 1 && num >= 2)
            printf("%i eh primo\n", num);
        else
            printf("%i nao eh primo\n", num);

    }
}

