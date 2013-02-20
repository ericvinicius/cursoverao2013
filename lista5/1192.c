/* 
* Introducao a Programacao - VERAO 2013 - IME - USP
* Prof. Neuton de Oliveira Braga Jr
* 5 Lista de Exercicios
*
* URI Online Judge - www.urionlinejudge.com.br
* Problema 1192
*
* Aluno: Eric Vinicius Camargo de Campos
*
* Turma: Manha
*/
#include<stdio.h>
#include<stdlib.h>
/*funcao para saber se a letra e minuscula*/
int minuscula(char c){
	return (c >= 'a' && c <= 'z');
}
/*funcao para saber se a letra e maiuscula*/
int maiuscula(char c){
	return (c >= 'A' && c <= 'Z');
}

int main(){
	/*Declaracao de Variaveis*/
	char str[5];
	int max, res = 0, i, cont = 0;

	/*Entrada de quantos calculos seram feitos*/
	scanf("%d", &max);

	/*Laco para repetir os calculos*/
	for(i = 0; i <= max; i++){
		/*Entrada das "expressoes", e define parada*/
		fgets(str, 5, stdin);
		str[3] = '\0';

		/*Verificacao para saber qual operacao devera ser feita.*/
		if(str[0] == str[2]){
			res = (str[0]-48) * (str[0]-48);
			cont++;

		} else if(maiuscula(str[1])){
			res = ((str[0]-48) - (str[2]-48));
			cont++;
		
		} else if(minuscula(str[1])){
			res = ((str[0]-48) + (str[2]-48));
			cont++;
		}
		
		if(cont > 0){
			printf("%d\n", res);
		}
	}

	return 0;
}
