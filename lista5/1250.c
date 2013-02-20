/* 
* Introducao a Programacao - VERAO 2013 - IME - USP
* Prof. Neuton de Oliveira Braga Jr
* 5 Lista de Exercicios
*
* URI Online Judge - www.urionlinejudge.com.br
* Problema 1250
*
* Aluno: Eric Vinicius Camargo de Campos
*
* Turma: Manha
*/
#include <stdio.h>

void calculaImprimi() {
	/*Declaracao de variaveis*/
	int i, t = 0;
	int alt, alturas[50];
	char st, pulos[50];
	int acertos = 0;

	/* Guarda a quantidade de tiros que serao avaliados*/
	scanf("%d", &t);

	/* guarda a altura dos tiros*/
	for (i = 0; i < t; i++) {
		scanf("%d", &alturas[i]);
	}

	/* Scanf para guardar o '\n'*/
	scanf("%c", &pulos[0]);

	/* guarda todas as acoes do jogador (se saltou ou nao)*/
	for (i = 0; i < t; i++) {
		scanf("%c", &pulos[i]);
	}

	/* verifica caso o jogador tenha tomado um tiro ou nao*/

	for (i = 0; i < t; i++) {
		alt = alturas[i];
		st = pulos[i];

		/* Considera que tomou um tiro se:
		* a altura do tiro for 1 ou 2 e nao saltar, ou
		* a altura for maior que 3 e salta*/
		if ((alt <= 2 && st == 'S') || (alt > 2 && st == 'J')) {
			acertos++;
		}
	}
	/*Imprimi os acertos*/
	printf("%d\n", acertos);
}

int main() {
	/*Declarao de variaveis*/
	int i, n = 0;

	/* Faz a leitura da quantidade de casos que serao avaliados*/
	scanf("%d", &n);
	/*laco para repetir os comandos n vezes*/
	for (i = 0; i < n; i++) {
		/*chama a funcao que possui os comandos*/
		calculaImprimi();
	}

	return 0;
}
