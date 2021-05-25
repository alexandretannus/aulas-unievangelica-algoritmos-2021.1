/* 
    URI Online Judge 
    Problema 1160 - Crescimento Populacional
    https://www.urionlinejudge.com.br/repository/UOJ_1160.html
 */

#include <stdio.h>
 
int main() {

	int T, PA, PB, TEMPO;
	double G1, G2;
	
	scanf("%d", &T);
	
	for(int i=0; i<T; i++) {
		TEMPO = 0;
		
		scanf("%d %d %lf %lf", &PA, &PB, &G1, &G2);
		
		do {
			PA = PA + PA*G1/100;
			PB = PB + PB*G2/100;
			TEMPO++;
			
		} while (PA<=PB && TEMPO<=100);
		
		if (TEMPO > 100) {
			printf("Mais de 1 seculo.\n");	
		} else {
			printf("%d anos.\n", TEMPO);			
		}
		
		
		
	}
	
	 

    return 0;
}