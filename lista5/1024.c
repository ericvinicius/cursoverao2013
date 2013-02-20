/* 
* Introducao a Programacao - VERAO 2013 - IME - USP
* Prof. Neuton de Oliveira Braga Jr
* 5 Lista de Exercicios
*
* URI Online Judge - www.urionlinejudge.com.br
* Problema 1024
*
* Aluno: Eric Vinicius Camargo de Campos
*
* Turma: Manha
*/
#include<stdio.h>
#include<string.h>
/*define para definir o maximo de caracters da string*/
#define MAX 25
/*Funcao para avaliar letras minusculas*/
int minuscula(char c){
	return (c >= 'a' && c <= 'z');
}
/*Funcao para avaliar letras maiusculas*/
int maiuscula(char c){
	return (c >= 'A' && c <= 'Z');
}
/*Funcao para avaliar qualquer letra*/
int letra(char c){
	return (maiuscula(c) || minuscula(c)); 
}

int main(){
	/*Declaracao de Variaveis*/
	int i, cont, j, k, n;
	char str[MAX], numeroCaracteres, aux;
	/*Leitura da quantidade de palavras/frases que serao inseridas*/
	scanf("%d ", &n);	
	
	for( ; n >= 1; n--){	
		fgets(str, MAX, stdin);
		numeroCaracteres = strlen(str);

		/* Laco para verificar se e uma letra, e somar mais 3. O primeiro passo da criptografia.*/
		for(i = 0; i <= numeroCaracteres; i++){
			if(letra(str[i])){ 			
				str[i] += 3;
			}
		}
		i -= 3;
		/*Laco para inverter a ordem da string. O Segundo passo da criptografia.*/
		for(j = 0; j <= i; j++){
			aux = str[j];
			str[j] = str[i];
			str[i] = aux;
			i--;

		}
		/*Laco para diminuir um caracter de todos os caracteres da STRING. O terceiro passo da criptografia.*/
		for(k = 0; k <= numeroCaracteres; k++){
			if(k >= numeroCaracteres/2){
				str[k]--;
			}
		}
		
		/*Laco para imprimir o resultado da criptografia*/
		for(cont = 0; cont <= numeroCaracteres-1; cont++){
			printf("%c", str[cont]);

		}

		/*imprimi uma quebra de linha*/
		printf("\n");
	}


	return 0;
}
