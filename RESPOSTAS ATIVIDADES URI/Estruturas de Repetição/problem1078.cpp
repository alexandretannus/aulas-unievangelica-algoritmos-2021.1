/* 
    URI Online Judge 
    Problema 1078 - Tabuada
    https://www.urionlinejudge.com.br/repository/UOJ_1078.html
 */

#include <stdio.h>
 
int main(){
	
	int valor, contador, result;
	
	scanf("%d", &valor);
	
    for(contador = 1; contador < 11; contador++ ){
        result=(valor*contador);
        printf("%d x %d = %d\n", contador, valor, result);
        
    }

	return 0;
}