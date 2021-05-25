/* 
    URI Online Judge 
    Problema 1145 - Sequência Lógica 2
    https://www.urionlinejudge.com.br/repository/UOJ_1145.html
 */

#include <stdio.h>
 
int main() {

	int x, y;
	
	scanf("%d %d", &x, &y);
	
	for(int i=1; i<=y; i++) {
		if (i%x == 0) {
			printf("%d\n", i);
		} else {
			printf("%d ", i);
		}	
	}

    return 0;
}