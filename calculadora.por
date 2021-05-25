programa
{
	
	funcao inicio()
	{
		real num1, num2, resultado=0.0
		caracter operador

		escreva("Digite um valor inteiro: ")
		leia(num1)
		escreva("Digite um valor inteiro: ")
		leia(num2)
		escreva("Digite o operador: ")
		leia(operador)

		
/*
		se (operador == '+') {
			resultado = num1 + num2
			escreva(num1, " ", operador, " ", num2, " = ", resultado)
		} senao se (operador == '*') {
			resultado = num1 * num2
			escreva(num1, " ", operador, " ", num2, " = ", resultado)
		} senao se (operador == '-') {
			resultado = num1 - num2
			escreva(num1, " ", operador, " ", num2, " = ", resultado)
		} senao se (operador == '/') {
			resultado = num1 / num2
			escreva(num1, " ", operador, " ", num2, " = ", resultado)
		} senao {
			escreva("Nenhuma operação definida")			
		}
*/
		escolha (operador) {
			caso '+':
				resultado = num1 + num2
				escreva(num1, " ", operador, " ", num2, " = ", resultado, "\n")
				pare
			caso '-':
				resultado = num1 - num2
				escreva(num1, " ", operador, " ", num2, " = ", resultado, "\n")
				pare
			caso '/':
				resultado = num1 / num2
				escreva(num1, " ", operador, " ", num2, " = ", resultado, "\n")
				pare
			caso '*':
				resultado = num1 * num2
				escreva(num1 + " " + operador + " " + num2 + " = " + resultado + "\n")
				pare

			caso contrario:				
				escreva("Operação inválida")
				
		}
		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 1230; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */