/* 
* Introducao a Programacao - VERAO 2013 - IME - USP
* Prof. Neuton de Oliveira Braga Jr
* 5 Lista de Exercicios
*
* URI Online Judge - www.urionlinejudge.com.br
* Problema 1177
*
* Aluno: Eric Vinicius Camargo de Campos
*
* Turma: Manha
*/
#include<stdio.h>
int main(){
	/*Declarao de Variaveis*/
	int n[1000], t, t2, i;

	/*Declarao de Variaveis*/
	scanf("%d", &t);

	/*Laco para imprimir 1000 vezes*/
	for(i = 0; i <= 999; ){
		/*Laco para imprimir apenas ate o valor que o usuario digitou*/
		for(t2 = 0; t2 <= t-1; t2++){
			n[i] = t2;
			printf("N[%d] = %d\n", i, n[i]);
			if(i >= 1000){
				break;
			}
			i++;
		}
	}
	return 0;
}
