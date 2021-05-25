/* 
    URI Online Judge 
    Problema 1153 - Fatorial Simples
    https://www.urionlinejudge.com.br/repository/UOJ_1153.html
 */

#include <stdio.h>

int main() {
    int n, fatorial = 1;

    scanf("%d", &n);

    for (int i=n; i>1; i--) {
        fatorial *= i;
    }

	printf("%d\n", fatorial);

    return 0;
}
