/*
	Construa um algoritmo em PORTUGOL, que receba três valores, A, B e C, e
	armazene-os em três variáveis com os seguintes nomes: MAIOR, INTER e MENOR
	(os nomes correspondem aos valores ordenados)
*/
programa
{	
	funcao inicio()
	{
		inteiro a, b, c, maior, inter, menor

		escreva("Digite o valor de A: ")
		leia(a)
		escreva("Digite o valor de B: ")
		leia(b)
		escreva("Digite o valor de C: ")
		leia(c)

		se (a > b e a > c) {
			maior = a
			se (b > c) {
				menor = c
				inter = b
			} senao {
				menor = b
				inter = c				
			}
		} senao se (b > c) {
			maior = b
			se (a > c) {
				menor = c
				inter = a
			} senao {
				menor = a
				inter = c				
			}
		} senao {
			maior = c
			se (a > b) {
				menor = b
				inter = a
			} senao {
				menor = a
				inter = b				
			}
		}

		escreva("Maior = ", maior, "\n")
		escreva("Inter = ", inter, "\n")
		escreva("Menor = ", menor, "\n")
		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 564; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */