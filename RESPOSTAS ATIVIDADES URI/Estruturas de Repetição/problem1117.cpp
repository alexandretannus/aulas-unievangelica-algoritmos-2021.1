/* 
    URI Online Judge 
    Problema 1117 - Validação de Nota
    https://www.urionlinejudge.com.br/repository/UOJ_1117.html
 */

#include <stdio.h>
 
int main(){
	
	int validas = 0;
    float nota, media, soma = 0.0;

    while (validas < 2) {
        scanf("%f", &nota);
        
        if (nota >= 0 && nota <=10) {
            validas += 1;
            soma += nota;
        } else {
            printf("nota invalida\n");
        }

    }

    media = soma/2.0;


    printf("media = %.2f\n", media);

	return 0;
}