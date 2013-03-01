/*
*	Introducao a Programacao - VERAO 2013 - IME - USP
*	Prof. Neuton de Oliveira Braga Jr
*
*	Exercicio Programa - BATALHA NAVAL
*
*	Funcoes especificas para configuracao, gerenciamento e execucao do jogo batalha naval .
*
*
*	Aluno : Eric Vinicius Camargo de Campos
*	Turma : Manha
*
*
*/
#include "impressao_matriz.h"

#include<stdio.h>

/* Funcao para imrprimir o nomes dos jogadores em cima dos tabuleiros!
 * esta funcao faz algumas contas para poder imprimir o nome exatamente no meio do tabuleiro.
 */
void imprimeEspacosNomes(int colunas) {
	int espacosNome, i;

	espacosNome = ((((2 * colunas) + 1) - 9) / 2);
	printf("   ");
	for (i = 0; i <= espacosNome; i++) {
		printf(" ");
	}
	printf("Jogador 1");
	for (i = 0; i <= espacosNome; i++) {
		printf(" ");
	}
	for (i = 0; i <= espacosNome; i++) {
		printf(" ");
	}
	printf("Jogador 2\n");
}

/*
 * Esta Funcao e responsavel por imprimir cada linha do tabuleiro.
 * Ela imprimi a linha do jogador 1 e a do jogador 2, em uma unica execucao.
 */
void imprimeLinha(int qtd_colunas, int linha, char tabuleiroJogador1[MAXLIN][MAXCOL], char tabuleiroJogador2[MAXLIN][MAXCOL]) {
	int col;

	/* Imprimir linha '-+' <  */
	printf("   +");

	for (col = 1; col <= qtd_colunas; col++) {
		printf("-+");
	}
	printf(" ** ");
	printf("+");

	for (col = 1; col <= qtd_colunas; col++) {
		printf("-+");
	}
	printf("\n");
	/* ate aqui >  */

	printf("%2d", linha);
	printf(" |");

	/* Imprimir a linha do tabuleiro 1: */
	for (col = 1; col <= qtd_colunas; col++) {
		if (tabuleiroJogador1[linha][col] == ACERTOU_ATAQUE) {
			printf("%c|", ACERTOU_ATAQUE);

		} else if(tabuleiroJogador1[linha][col] == ERROU_ATAQUE){
			printf("%c|", ERROU_ATAQUE);

		}else {
			printf("%c|", VAZIO);
		}
	}

	printf(" ** ");
	printf("|");

	/* Imprimir a linha do tabuleiro 2: */
	for (col = 1; col <= qtd_colunas; col++) {

		if (tabuleiroJogador2[linha][col] == ACERTOU_ATAQUE) {
			printf("%c|", ACERTOU_ATAQUE);

		} else if(tabuleiroJogador2[linha][col] == ERROU_ATAQUE){
			printf("%c|", ERROU_ATAQUE);

		} else {
			printf("%c|", VAZIO);
		}
	}
	printf("\n");
}

/*
 * Esta funcao imprimi o tabuleiro dos dois jogadores, com uma unica execucao.
 * Mas para imprimir cada linha do tabuleiro ele chama a funcao imprimeLinha.
 */
void imprimeTabuleiro(int linhas, int colunas, char tabuleiroJogador1[MAXLIN][MAXCOL], char tabuleiroJogador2[MAXLIN][MAXCOL]) {
	int lin, col;

	for (lin = 1; lin <= linhas; lin++) {
		imprimeLinha(colunas, lin, tabuleiroJogador1, tabuleiroJogador2);

		if (lin == linhas) {
			printf("   +");
			for (col = 1; col <= colunas; col++) {
				printf("-+");
			}

			printf(" ** ");

			printf("+");
			for (col = 1; col <= colunas; col++) {
				printf("-+");
			}
			printf("\n");

			/* Para imprimir as letra de indice do tabuleiro ---> */
			printf("    %c", 97); /* esta linha imprimi a letra 'a', que sempre havera */

			for (col = 98; col <= colunas + 96; col++) {
				printf(" %c", col);
			}

			printf("      %c", 97);

			for (col = 98; col <= colunas + 96; col++) {
				printf(" %c", col);
			}
			/* <--- ate aqui. */
		}
	}

	printf("\n");
}

/*
 * Esta funcao chama a funcao que coloca os nomes em cima das matrizes e a funcao que imprime as matrizes.
 */
void imprime_tabuleiros(char tabuleiroJogador1[MAXLIN][MAXCOL], char tabuleiroJogador2[MAXLIN][MAXCOL], int linhas, int colunas) {
	imprimeEspacosNomes(colunas);
	imprimeTabuleiro(linhas, colunas, tabuleiroJogador1, tabuleiroJogador2);
	printf("\n");
}

/* funcao para limpar a matriz colocando VAZIOS */
void limpa_matriz(char matriz[MAXLIN][MAXCOL]) {
	int lin, col;
	for (lin = 0; lin < MAXLIN; lin++) {
		for (col = 0; col < MAXCOL; col++) {
			matriz[lin][col] = VAZIO;
		}
	}
}

/*
 * Est funcao serve para limpar todos os valores das matrizes, para ficar com lixo de memoria.
 */
void limpa_matrizes(char tabuleiroJogador1[MAXLIN][MAXCOL], char tabuleiroJogador2[MAXLIN][MAXCOL], char naviosJogador1[MAXLIN][MAXCOL],
		char naviosJogador2[MAXLIN][MAXCOL]) {

	/* Limpeza de tentativas de ataques */
	limpa_matriz(tabuleiroJogador1);
	limpa_matriz(tabuleiroJogador2);

	limpa_matriz(naviosJogador1);
	limpa_matriz(naviosJogador2);
}

