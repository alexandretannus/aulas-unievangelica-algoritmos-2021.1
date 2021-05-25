/* 
    URI Online Judge 
    Problema 1066 - Pares, Ímpares, Positivos e Negativos
    https://www.urionlinejudge.com.br/repository/UOJ_1066.html
 */

#include <stdio.h>
 
int main() {
 
    int num, qtdPositivos = 0, qtdNegativos = 0, qtdPares = 0, qtdImpares = 0;
    
    for (int i=0; i<5; i++) {
        scanf("%d", &num);
        
        if (num < 0) 
            qtdNegativos++; 
        else if (num > 0)
            qtdPositivos++;
            
        num % 2 == 0? qtdPares++ : qtdImpares++;
    }
    
    printf("%d valor(es) par(es)\n", qtdPares);
    printf("%d valor(es) impar(es)\n", qtdImpares);
    printf("%d valor(es) positivo(s)\n", qtdPositivos);
    printf("%d valor(es) negativo(s)\n", qtdNegativos);
    
    
    return 0;
}