/* 
* Introducao a Programacao - VERAO 2013 - IME - USP
* Prof. Neuton de Oliveira Braga Jr
* 5 Lista de Exercicios
*
* URI Online Judge - www.urionlinejudge.com.br
* Problema 1179
*
* Aluno: Eric Vinicius Camargo de Campos
*
* Turma: Manha
*/
#include<stdio.h>
int main(){
	/*Declaracao de variaveis*/
	int par[5], impar[5], n, i, contPar, contImpar, j;
	contImpar = 0;
	contPar = 0;

	/*Laco para pegar os valores do teclado*/
	for(i = 1; i <= 15; i++){
		scanf("%d", &n);

		/*Verificacao se e par ou impar*/
		if(n % 2 == 0){
			par[contPar] = n;
			contPar++;
		} else {
			impar[contImpar] = n;
			contImpar++;
		}

		/*verificacao para saber se ja lotou o array de contagem, e imprimir*/
		if(contPar == 5){
			for(j = 0; j <= contPar-1; j++){
				printf("par[%d] = %d\n", j, par[j]);
			}
			contPar = 0;
		} else if (contImpar == 5){
			for(j = 0; j <= contImpar-1; j++){
				printf("impar[%d] = %d\n", j, impar[j]);
			}
			contImpar = 0;
		}
	}

	/*Imprimir os valores que nao lotaram a variavel*/
	for( ;contImpar > 0; j++){
		if(j == 5){
			j = 0;
		}
		printf("impar[%d] = %d\n", j, impar[j]);
		contImpar--;
	}
	j = 0;
	for( ;contPar > 0; j++){
		if(j == 5){
			j = 0;
		}
		printf("par[%d] = %d\n", j, par[j]);
		contPar--;
	}
	return 0;
}
