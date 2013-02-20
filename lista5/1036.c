/* 
* Introducao a Programacao - VERAO 2013 - IME - USP
* Prof. Neuton de Oliveira Braga Jr
* 5 Lista de Exercicios
*
* URI Online Judge - www.urionlinejudge.com.br
* Problema 1036
*
* Aluno: Eric Vinicius Camargo de Campos
*
* Turma: Manha
*/
#include<stdio.h>
#include<math.h>
int main(){
	/* Declaracao de variaveis*/
	int a, b, c, delta;
	float xmais, xmenos;

	/* Leitura do teclado */
	scanf("%d %d %d", &a, &b, &c);

	/* Calcula o delta*/
	delta = (b*b) - (4*(a*c));

	/* Verifica se havera divisao ou raiz por 0*/
	if(a == 0 || delta < 0){
		printf("Impossivel calcular\n");
		return 0;
	}

	/* Calcula o bascara*/
	xmais = ((b*(-1)) + sqrt(delta)) / (2 * a);

	xmenos = ((b*(-1)) - sqrt(delta)) / (2 * a);

	/*Imprime as raizes*/
	printf("R1 = %f\n", xmais);
	printf("R2 = %f\n", xmenos);

	return 0;
}
