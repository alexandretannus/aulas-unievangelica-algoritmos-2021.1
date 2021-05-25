/* 
    URI Online Judge 
    Problema 1154 - Idades
    https://www.urionlinejudge.com.br/repository/UOJ_1154.html
 */

#include <stdio.h>
 
int main() {
    int idade = 0, soma = 0, quantidade = 0;
    float media;
    
    while (true) {
        scanf("%d", &idade);
        if (idade < 0) {
            break;
        }
        soma += idade;
        quantidade++;
    }
    
    media = 1.0 * soma/quantidade;
    printf("%.2f\n", media);
 
    return 0;
}