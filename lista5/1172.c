/* 
* Introducao a Programacao - VERAO 2013 - IME - USP
* Prof. Neuton de Oliveira Braga Jr
* 5 Lista de Exercicios
*
* URI Online Judge - www.urionlinejudge.com.br
* Problema 1172
*
* Aluno: Eric Vinicius Camargo de Campos
*
* Turma: Manha
*/
#include<stdio.h>
int main(){
	/* Declaracao de variaveis*/
	int x[10], i;


	/* Laco para verificar o valor do array */
	for(i = 0; i < 10; i++){
		/* Leitura do teclado, e guardo o valor em um array */
		scanf("%d", &x[i]);
		if(x[i] < 1){
			x[i] = 1;
		}
	}
	/* Laco para imprimir o array apos as modificacoes */
	for (i = 0; i < 10; i++){
		printf("X[%d] = %d\n", i, x[i]);
	}
	return 0;
}
