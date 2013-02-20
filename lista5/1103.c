/* 
* Introducao a Programacao - VERAO 2013 - IME - USP
* Prof. Neuton de Oliveira Braga Jr
* 5 Lista de Exercicios
*
* URI Online Judge - www.urionlinejudge.com.br
* Problema 1103
*
* Aluno: Eric Vinicius Camargo de Campos
*
* Turma: Manha
*/
#include<stdio.h>

int main(){
	/*Declaracao de variaveis*/
	int res1, res2, i, cont = 0, H1, M1, H2, M2;

	/*Entrada dos valores dos horarios*/
	scanf("%d %d %d %d", &H1, &M1, &H2, &M2);

	/*Laco para imprimir a diferenca e pegar os novos horarios, enquanto forem diferentes de 0*/
	while((H1 != 0) || (M1 != 0) || (H2 != 0) || (M2 != 0)){
		
		/*multiplicacao e soma para pegar apenas os minutos*/
		res1 = (H1*60)+M1;
		res2 = (H2*60)+M2;

		/*LAco para contar a diferenca*/
		for(i = res1; i != res2; i++){
			if(i == 1440){
				i = 0;
			}
			cont++;
		}

		/*Imprimi resultado, reseta variaveis, pega novos horarios*/
		printf("%d\n", cont);
		res1 = 0;
		res2 = 0;
		cont = 0;
		scanf("%d %d %d %d", &H1, &M1, &H2, &M2);
	}

	return 0;
}
