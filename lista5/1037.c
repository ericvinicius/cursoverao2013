/* 
* Introducao a Programacao - VERAO 2013 - IME - USP
* Prof. Neuton de Oliveira Braga Jr
* 5 Lista de Exercicios
*
* URI Online Judge - www.urionlinejudge.com.br
* Problema 1037
*
* Aluno: Eric Vinicius Camargo de Campos
*
* Turma: Manha
*/
#include<stdio.h>
int main(){
	/* Declaracao de variaveis*/
	float n;

	/* Leitura do teclado */
	scanf("%f", &n);

	/* Verificacoes para imprimir da forma correta */
	if(n >= 0.0 && n <= 25.0){
		printf("Intervalo [0,25]\n");

	} else if(n >= 25.00001 && n <= 50.0){
		printf("Intervalo (25,50]\n");

	} else if(n >= 50.00001 && n <= 75.0){
		printf("Intervalo (50,75]\n");

	} else if(n >= 75.00001 && n <= 100.0){
		printf("Intervalo (75,100]\n");

	} else if(n < 0.0 || n > 100.0){
		printf("Fora do Intervalo\n");
	}
	return 0;
}
