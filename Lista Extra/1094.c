/* 
* Introducao a Programacao - VERAO 2013 - IME - USP
* Prof. Neuton de Oliveira Braga Jr
* Lista Extra de Exercicios
*
* URI Online Judge - www.urionlinejudge.com.br
* Problema 1094
*
* Aluno: Eric Vinicius Camargo de Campos
*
* Turma: Manha
*/
#include<stdio.h>
int main(){
	/*Declaracao de variaveis */
	int n, i, qtd;
	int total = 0, rato = 0, coelho = 0, sapo = 0;
	char animal;
	double porcentagemCoelhos, porcentagemRatos, porcentagemSapos;
	char porcentagem = '%';

	/*Leitura da quantidade de casos*/
	scanf("%d", &n);

	/*Laco para repetir a quantidade de casos*/
	for(i = 0; i < n; i++){
		/*Leitura da quantidade de animais e o animal*/
		scanf("%d %c", &qtd, &animal);

		/*Guarda o total*/
		total += qtd;

		/*Verifica a cobaia para ter o total de cada*/
		if(animal == 'C'){
			coelho += qtd;

		} else if(animal == 'R'){
			rato += qtd;

		} else if(animal == 'S'){
			sapo += qtd;
		}
	}

	/*Calcula a porcentagem de cada cobaia*/
	porcentagemCoelhos = (100 * coelho) / total;
	porcentagemRatos = (100 * rato) / total;
	porcentagemSapos = (100 * sapo) / total;

	/*Imprimi os resultados*/
	printf("Total: %d cobaias\n", total);
	printf("Total de coelhos: %d\n", coelho);
	printf("Total de ratos: %d\n", rato);
	printf("Total de sapos: %d\n", sapo);
	printf("porcentagem de coelhos: %.2f %c\n", porcentagemCoelhos, porcentagem);
	printf("porcentagem de ratos: %.2f %c\n", porcentagemRatos, porcentagem);
	printf("porcentagem de sapos: %.2f %c\n", porcentagemSapos, porcentagem);

	return 0;
}