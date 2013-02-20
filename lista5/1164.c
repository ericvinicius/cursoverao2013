/* 
* Introducao a Programacao - VERAO 2013 - IME - USP
* Prof. Neuton de Oliveira Braga Jr
* 5 Lista de Exercicios
*
* URI Online Judge - www.urionlinejudge.com.br
* Problema 1164
*
* Aluno: Eric Vinicius Camargo de Campos
*
* Turma: Manha
*/
#include<stdio.h>
int main(){
	/*Declaracao de variaveis*/
	int n, x[21], i, cont, res = 0, perfeito = 0;

	/*Leitura do teclado, de quantos numeros*/
	scanf("%d", &n);

	/*Leitura dos numeros*/
	for(i = 1; i <= n; i++){
		scanf("%d", &x[i]);
		perfeito = 0;
		res = 0;

		/*laco para verificar se o numero e perfeito ou nao*/
		for(cont = 1; cont < x[i]; cont++){
			if(x[i] % cont == 0){
				res += cont;

				if(res == x[i]){
					perfeito++;
					break;
				}
			}
		}

		/*Verificacao para impressao do valores*/
		if(perfeito != 0){
			printf("%d eh perfeito\n", x[i]);
		} else {
			printf("%d nao eh perfeito\n", x[i]);
		}
	}		
	return 0;
}
