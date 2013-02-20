/* 
* Introducao a Programacao - VERAO 2013 - IME - USP
* Prof. Neuton de Oliveira Braga Jr
* 5 Lista de Exercicios
*
* URI Online Judge - www.urionlinejudge.com.br
* Problema 1042
*
* Aluno: Eric Vinicius Camargo de Campos
*
* Turma: Manha
*/
#include<stdio.h>
int main(){
	/* Declaracao de variaveis*/
	int n1, n2, n3;

	/* Leitura do teclado */
	scanf("%d %d %d", &n1, &n2, &n3);

	/* Verificacao para saber qual e a ordem crecente, e imprimilos, na sua devida ordem */
	if(n1 >= n2 && n2 >= n3){
		printf("%d\n", n3);
		printf("%d\n", n2);
		printf("%d\n", n1);

	} else if(n1 >= n2 && n3 >= n2){
		printf("%d\n", n2);
		printf("%d\n", n3);
		printf("%d\n", n1);

	} else if(n2 >= n1 && n1 >= n3){
		printf("%d\n", n3);
		printf("%d\n", n1);
		printf("%d\n", n2);

	} else if(n3 >= n1 && n1 >= n2){
		printf("%d\n", n1);
		printf("%d\n", n3);
		printf("%d\n", n2);
		
	} else if(n2 >= n3 && n3 >= n1){
		printf("%d\n", n2);
		printf("%d\n", n1);
		printf("%d\n", n3);
		
	} else if(n3 >= n2 && n2 >= n1){
		printf("%d\n", n1);
		printf("%d\n", n2);
		printf("%d\n", n3);

	}
	printf("\n");
	printf("%d\n", n1);
	printf("%d\n", n2);
	printf("%d\n", n3);

	return 0;
}
