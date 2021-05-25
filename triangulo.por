/*
 * Dados três valores inteiros positivos, definir se pode ser 
 * formado um triângulo e o tipo dele (escaleno, isósceles e equilátero)
 */

programa
{
	
	funcao inicio()
	{
		inteiro a, b, c

		escreva("Digite um valor inteiro: ")
		leia(a)
		escreva("Digite um valor inteiro: ")
		leia(b)
		escreva("Digite um valor inteiro: ")
		leia(c)

		se (a < (b+c) e b < (a+c) e c < (a+b)) {
			// teste equilátero
			se (a == b e a == c) {
				escreva("Triângulo Equilátero")
			} senao {
				//teste isósceles
				se ((a == b e b != c) ou (a == c e b != c) ou (b == c e a != b)) {
					escreva("Triângulo Isósceles")					
				} senao {					
					escreva("Triângulo Escaleno")
				}
			}			
		} senao {
			escreva("Não forma triângulo")
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 691; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */