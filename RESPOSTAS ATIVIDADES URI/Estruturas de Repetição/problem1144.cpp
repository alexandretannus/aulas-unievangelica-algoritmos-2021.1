/* 
    URI Online Judge 
    Problema 1144 - Sequência Lógica
    https://www.urionlinejudge.com.br/repository/UOJ_1144.html
 */

#include <stdio.h>

int main() {

	int x;	
	
	scanf("%d", &x);
	
	for (int i=1; i<=x; i++) {
		printf("%d %d %d\n", i, i*i, i*i*i);
		printf("%d %d %d\n", i, i*i+1, i*i*i+1);
	}		

    return 0;
}