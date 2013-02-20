/* 
* Introducao a Programacao - VERAO 2013 - IME - USP
* Prof. Neuton de Oliveira Braga Jr
* 5 Lista de Exercicios
*
* URI Online Judge - www.urionlinejudge.com.br
* Problema 1168
*
* Aluno: Eric Vinicius Camargo de Campos
*
* Turma: Manha
*/
#include<stdio.h>
/*Funcao que soma a quantidade de leds*/
int verificaDigitos(int res){
	int soma = 0;
	if(res == 0){
		soma += 6;
	} else if(res == 1){
		soma += 2;
	} else if(res == 2){
		soma += 5;
	} else if(res == 3){
		soma += 5;
	} else if(res == 4){
		soma += 4;
	} else if(res == 5){
		soma += 5;
	} else if(res == 6){
		soma += 6;
	} else if(res == 7){
		soma += 3;
	} else if(res == 8){
		soma += 7;
	} else {
		soma += 6;
	}
	return soma;
}
/*Funcao que verifica qual digito eh, e chama funcao "verificaDigitos"*/ 
int digitos(int n){
	int res, soma;
	soma = 0;
	for ( ; n > 0; n /= 10){
		res = n % 10;
		soma += verificaDigitos(res);
	}
	return soma;
}

int main(){
	/*Declaracao de variaveis*/
	int n, numero[1000], i, soma;
	soma = 0;

	/*Leitura do teclado, da quantidade de numeros*/
	scanf("%d", &n);

	/*Laco para pegar os numeros do teclado*/
	for(i = 1; i <= n; i++){
		scanf("%d", &numero[i]);
		soma = digitos(numero[i]);
		printf("%d leds\n", soma);
	}
	return 0;
}
