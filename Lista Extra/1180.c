/* 
* Introducao a Programacao - VERAO 2013 - IME - USP
* Prof. Neuton de Oliveira Braga Jr
* Lista Extra de Exercicios
*
* URI Online Judge - www.urionlinejudge.com.br
* Problema 1180
*
* Aluno: Eric Vinicius Camargo de Campos
*
* Turma: Manha
*/
#include<stdio.h>
int main(){
	/*Declaracao de variaveis*/
	int n, i, menorValor, pos, atual, menor;
	int str[1050];

	/*Leitura da quantidade de casos*/
	scanf("%d", &n);

	/*Laco para ficar lendo os valores, enquanto houver casos*/
	for(i = 0; i < n; i++){
		scanf("%d", &str[i]);

		if(i == 0){
			menor = str[i];
		}

		atual = str[i];

		/*verifica se o valor atual e menor que o menos, e os substitui caso necessario*/
		if(atual <= menor){
			menorValor = atual;
			pos = i;
			menor = atual;
		}
	}
	/*Imprime os resultados*/
	printf("Menor valor: %d\n", menorValor);
	printf("Posicao: %d\n", pos);
	return 0;
}