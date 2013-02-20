/* 
* Introducao a Programacao - VERAO 2013 - IME - USP
* Prof. Neuton de Oliveira Braga Jr
* 5 Lista de Exercicios
*
* URI Online Judge - www.urionlinejudge.com.br
* Problema 1078
*
* Aluno: Eric Vinicius Camargo de Campos
*
* Turma: Manha
*/
#include<stdio.h>
int main(){
	/* Declaracao de variaveis*/
	int n, i;

	/* Leitura do teclado */
	scanf("%d", &n);

	/* Laco para imorimir cada linha da tabuada */
	for(i = 1; i <= 10; i++){
		printf("%d x %d = %d\n", i, n, (n*i));
	}
	return 0;
}
