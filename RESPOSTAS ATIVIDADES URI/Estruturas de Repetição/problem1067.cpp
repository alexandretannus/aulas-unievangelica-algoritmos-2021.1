/* 
    URI Online Judge 
    Problema 1067 - Números Ímpares
    https://www.urionlinejudge.com.br/repository/UOJ_1067.html
 */

#include <stdio.h>
 
int main() {

    int num; 
    
    scanf("%d", &num);
    
    for (int i=1; i<=num; i+=2) {
        printf("%d\n", i);
    }
 
    return 0;
}