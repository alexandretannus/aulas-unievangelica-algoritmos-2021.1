/* 
    URI Online Judge 
    Problema 1073 - Quadrado de Pares
    https://www.urionlinejudge.com.br/repository/UOJ_1073.html
 */

#include <stdio.h>
int main() {
 
    int num;
    scanf("%d", &num);
    
    for (int i=2; i<=num; i+=2) {
        printf("%d^2 = %d\n", i, i*i);
    }
 
    return 0;
}