#include "impressao_matriz.h"

#include<stdio.h>

/* Funcao para imrprimir o nomes dos jogadores em cima dos tabuleiros */
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

			/* Para imprimir as letra < */
			printf("    %c", 97); /* esta linha imprimi a letra 'a', que sempre havera */

			for (col = 98; col <= colunas + 96; col++) {
				printf(" %c", col);
			}

			printf("      %c", 97);

			for (col = 98; col <= colunas + 96; col++) {
				printf(" %c", col);
			}
			/* ate aqui > */
		}
	}

	printf("\n");
}

/* Funcao para DEBUG, para mostrar a matriz de tentativas */
void DEBUG_imprime_tabuleiro(char tabuleiro[MAXLIN][MAXCOL]) {
	int lin, col;

	/* Inicia da linha e coluna 1 pois esta sendo desconsiderado o 0 */
	for (lin = 1; lin < MAXLIN; lin++) {
		for (col = 1; col < MAXCOL; col++) {
			if (tabuleiro[lin][col] == VAZIO) {
				printf(" %c", VAZIO_DEBUG);
			} else {
				printf(" %c", tabuleiro[lin][col]);
			}
		}
		printf("\n");
	}
	printf("\n");
}

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

void limpa_matrizes(char tabuleiroJogador1[MAXLIN][MAXCOL], char tabuleiroJogador2[MAXLIN][MAXCOL], char naviosJogador1[MAXLIN][MAXCOL],
		char naviosJogador2[MAXLIN][MAXCOL]) {

	/* Limpeza de tentativas de ataques */
	limpa_matriz(tabuleiroJogador1);
	limpa_matriz(tabuleiroJogador2);

	limpa_matriz(naviosJogador1);
	limpa_matriz(naviosJogador2);
}

