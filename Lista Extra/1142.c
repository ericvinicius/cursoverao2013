/* 
* Introducao a Programacao - VERAO 2013 - IME - USP
* Prof. Neuton de Oliveira Braga Jr
* Lista Extra de Exercicios
*
* URI Online Judge - www.urionlinejudge.com.br
* Problema 1142
*
* Aluno: Eric Vinicius Camargo de Campos
*
* Turma: Manha
*/
#include<stdio.h>
int main(){
	/*declaracao de Variaveis*/
	int n, i, j = 1;

	/*Leitura da quantidade de casos*/
	scanf("%d", &n);

	/*Laco para imprimir os resultados*/
	for(i = 1; i <= n; ){
		printf("%d %d %d PUM\n", j, (j+1), (j+2));
		j += 4;
		if(i == n){
			break;
		}
		i++;
		printf("%d %d %d PUM\n", j, (j+1), (j+2));
		j += 4;
		if(i == n){
			break;
		}
		i++;
		printf("%d %d %d PUM\n", j, (j+1), (j+2));
		j += 4;
		if(i == n){
			break;
		}
		i++;
	}


	return 0;
}