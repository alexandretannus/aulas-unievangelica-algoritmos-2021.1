/*
	Escreva um programa que leia as notas de 4 exercícios de 4 estudantes e depois:

	1. calcule a média da turma para cada exercício;
	2. descubra o exercício com menor média da turma;
	3. calcule a média de cada estudante, excluindo-se esse exercício.

*/

#include <stdio.h>

void imprimirVetor(float vetor[], int tamanho) {
	for (int i=0; i < tamanho; i++) {
		printf("%.2f \t", vetor[i]);
	}
	printf("\n");
}

int main() {
	
	// declaração de variáveis
	
	int qtdAlunos = 4, qtdExercicios = 4;
	int notas[qtdAlunos][qtdExercicios] = {
		{1, 3, 1, 5},
		{8, 2, 1, 3},
		{10, 5, 6, 7},
		{3, 5, 2, 3}
	};
	float mediasExercicios[qtdExercicios], menor = 999.0, mediasEstudantes[qtdAlunos];
	int somaNotasExercicios = 0, indiceMenor = 0, somaNotasAluno = 0;
	
	
	// entrada de dados	
	for (int i=0; i < qtdAlunos; i++) {
		for (int j=0; j < qtdExercicios; j++) {
			printf("Digite nota do exercicio %i do aluno %i: ", j+1, i+1);
			scanf("%i", &notas[i][j]);
		}
	}
	
	// calcular a média da turma para cada exercício
	for (int i=0; i < qtdExercicios; i++) {
		somaNotasExercicios = 0;
		for (int j=0; j < qtdAlunos; j++) {
			somaNotasExercicios += notas[j][i];
		}
		printf("Soma: %i\n", somaNotasExercicios);
		mediasExercicios[i] = 1.0*somaNotasExercicios/qtdExercicios;
	}	
	imprimirVetor(mediasExercicios, qtdExercicios);
		
	// descobrir o exercício com menor média da turma
	for (int i=0; i<qtdExercicios; i++) {
		if (mediasExercicios[i] < menor) {
			menor = mediasExercicios[i];
			indiceMenor = i;
		}
	}
	
	// calcular a média de cada estudante, excluindo-se esse exercício
	for (int i=0; i<qtdAlunos; i++) {
		somaNotasAluno = 0;
		for (int j=0; j<qtdExercicios; j++) {
			if (j != indiceMenor) {
				somaNotasAluno += notas[i][j];
			}
			mediasEstudantes[i] = 1.0*somaNotasAluno/(qtdExercicios-1);
		} 
	}
	
	// mostrar média de cada estudante
	printf("\n\n");
	for (int i=0; i<qtdAlunos; i++) {
		printf("Media do aluno %i: %.2f\n", i+1, mediasEstudantes[i]);
	}
	
	return 0;
}

