/* 
* Introducao a Programacao - VERAO 2013 - IME - USP
* Prof. Neuton de Oliveira Braga Jr
* 5 Lista de Exercicios
*
* URI Online Judge - www.urionlinejudge.com.br
* Problema 1160
*
* Aluno: Eric Vinicius Camargo de Campos
*
* Turma: Manha
*/
#include <stdio.h>

int main() {
	int i, max = 0;
	int cidadeA, cidadeB, anos;
	double crecimentoA, crecimentob;
	
	/* Guarda o numero de comparacoes que serao inseridas*/
	scanf("%d", &max);
	for (i = 0; i < max; i++) {
		
		/*guarda o tamanho de cada cidade "atualmente" e guarda o crecimento delas */
		scanf("%d %d %lf %lf", &cidadeA, &cidadeB, &crecimentoA, &crecimentob);

		/* Divide por 100, pois o valor inserido se refere a um valor de porcentagem */
		crecimentoA /= 100.0;
		crecimentob /= 100.0;

		for (anos = 0; anos <= 100; anos++) {
			/* Verifica se a populacao da cidade A ultrapassou a populacao da cidade B*/
			if (cidadeA > cidadeB) {
				break;
			}

			/* Adiciona a populacao de cada cidade quanto elas cresceram*/
			cidadeA += cidadeA * crecimentoA;
			cidadeB += cidadeB * crecimentob;
		}

		if (anos > 100) {
			printf("Mais de 1 seculo.\n");
		} else {
			printf("%d anos.\n", anos);
		}
	}

	return 0;
}

