/* 
* Introducao a Programacao - VERAO 2013 - IME - USP
* Prof. Neuton de Oliveira Braga Jr
* Lista Extra de Exercicios
*
* URI Online Judge - www.urionlinejudge.com.br
* Problema 1175
*
* Aluno: Eric Vinicius Camargo de Campos
*
* Turma: Manha
*/
#include<stdio.h>
int main(){
	/*Declaracao de Variaveis */
	int str[25], i, j = 0;

	/*Laco para preencher o vetor */
	for(i = 0; i < 20; i++){
		scanf("%d", &str[i]);
	}
	i--;
	/*Laco para imprimir os resultados trocados*/
	for( ; i >= 0; i--){
		printf("N[%d] = %d\n", j, str[i]);
		j++;
	}

	return 0;
}