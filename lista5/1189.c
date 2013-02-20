/* 
* Introducao a Programacao - VERAO 2013 - IME - USP
* Prof. Neuton de Oliveira Braga Jr
* 5 Lista de Exercicios
*
* URI Online Judge - www.urionlinejudge.com.br
* Problema 1190
*
* Aluno: Eric Vinicius Camargo de Campos
*
* Turma: Manha
*/
#include <stdio.h>
int main() {
	/*Declaracao de variaveis*/
	int j, i, coluna;
	float m[12][12];
	float resultado = 0.0; 
	float cont = 0.0;
	char letra;

	/* Leitura do teclado, operacao */
	scanf("%c", &letra);

	for (i = 0; i < 12; i++) {
		for (j = 0; j < 12; j++) {
			scanf("%f", &m[i][j]);
			
			/* Verifica qual sera a operacao, e quais valores estao apartir da area a esquerda */
			if((j + i) < 11 && letra == 'S' && j < 5 && j < i){
				resultado += m[i][j];
			} else if ((j + i) < 11 && letra == 'M' && j < 5 && j < i){
				resultado += m[i][j];
				cont++;
			}
		}
	}
	
	/* Imprimi o resultado*/
	if(cont > 0){
		resultado /= cont;
		printf("%.1f\n", resultado);
	} else {
		printf("%.1f\n", resultado);
	}
	return 0;
}
