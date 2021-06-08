/*
	Escreva um programa que leia as notas de 10 exercícios de um estudante 
	e calcule a média dos 9 exercícios com maiores notas.
*/

#include <stdio.h>

int main() {
	
	// declaração de variáveis
	float notas[10], soma = 0.0, media, menor = 9999.0;
	int indiceMenor=0;
	
	// entrada de dados
	for (int i=0; i<10; i++){
		printf("Digite nota %i: ", i+1);
		scanf("%f", &notas[i]);	
	}	
	
	// encontrar a menor nota
	for (int i=0; i<10; i++) {
		if (notas[i] < menor) {
			menor = notas[i];
			indiceMenor = i;
		}
	}	
	printf("Menor Nota = %.2f\n\n", menor);	
	
	// calcular a média
	for (int i=0; i < 10; i++) {
		if(i != indiceMenor) {
			soma = soma + notas[i];
		}
	}
	media = soma/9;
	
	// mostrar resultado
	printf("A media final eh %.2f", media);
	
	return 0;
}
