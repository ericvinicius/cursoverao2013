
/* 
* Introducao a Programacao - VERAO 2013 - IME - USP
* Prof. Neuton de Oliveira Braga Jr
* Lista Extra de Exercicios
*
* URI Online Judge - www.urionlinejudge.com.br
* Problema 1174
*
* Aluno: Eric Vinicius Camargo de Campos
*
* Turma: Manha
*/

#include<stdio.h>
#include<math.h>

void printNumeroFloat(float numero, int j) {
	int n, i, passouPonto = 0, cont = 0;
	char numeroExtenso[30];

	n = sprintf(numeroExtenso, "%f", numero);

	for (i = 0; i < n; i++) {
		if (numeroExtenso[i] == '.') {
			passouPonto = 1;

		} else if (passouPonto == 1 && numeroExtenso[i] == '0') {
			break;
		}

		if(cont == 0){
			printf("N[%d] = ", j);
			cont++;
		}

		printf("%c", numeroExtenso[i]);
	}
	printf("\n");
}

int main(){
	/*declaracao de variaveis*/
	double str[120];
	int i;
	double aux;

	/*Laco para entrada do vetor*/
	for(i = 0; i < 10; i++){
		scanf("%lf", &str[i]);
	}

	/*Laco para imprimir o vetor*/
	for(i = 0; i < 10; i++){
		aux = floor(str[i]);

		/*verifica caso seja um float*/
		if(aux - str[i] != 0){
			printNumeroFloat(str[i], i);

		} else {
			/*imprimi um int, caso nao seja um float*/	
			printf("N[%d] = %.0f\n", i, aux);
		}
	}
	return 0;
}