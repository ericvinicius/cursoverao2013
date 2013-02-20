#include "gerador_navio.h"
#include "definicoes.h"

#include <stdlib.h>
#include <time.h>

void adiciona_navio_em_posicao_aleatoria(char naviosJogador[MAXLIN][MAXCOL], int linhas, int colunas, int navios, int tamanho_maximo_navio) {
	/* Gera uma posicao aleatoria de um navio */
	int lin, col, aux, sentido;

	srand(time(0));

	do {
		lin = rand() % linhas;
		col = rand() % colunas;
	} while (naviosJogador[lin][col] != VAZIO);

	/* gero o sentido no qual o navio vai ser "Escrito" */
	sentido = rand() % 4;

	naviosJogador[lin][col] = NAVIO_CORPO;
	tamanho_maximo_navio--;

	/* Guarda a possicao do navio */
	switch (sentido) {
	case 0:
		aux = col - 1;

		while (aux > 0 && naviosJogador[lin][aux] == VAZIO && lin < linhas && aux < colunas && tamanho_maximo_navio > 0) {
			naviosJogador[lin][aux] = NAVIO_CORPO;
			aux--;
			tamanho_maximo_navio--;
		}
		break;
	case 1:
		aux = col + 1;
		while (aux > 0 && naviosJogador[lin][aux] == VAZIO && lin < linhas && aux < colunas && tamanho_maximo_navio > 0) {
			naviosJogador[lin][aux] = NAVIO_CORPO;
			aux++;
			tamanho_maximo_navio--;
		}
		break;
	case 2:
		aux = lin - 1;
		while (aux > 0 && naviosJogador[aux][col] == VAZIO && aux < linhas && col < colunas && tamanho_maximo_navio > 0) {
			naviosJogador[aux][col] = NAVIO_CORPO;
			aux--;
			tamanho_maximo_navio--;
		}
		break;
	case 3:
		aux = lin + 1;
		while (aux > 0 && naviosJogador[aux][col] == VAZIO && aux < linhas && col < colunas && tamanho_maximo_navio > 0) {
			naviosJogador[aux][col] = NAVIO_CORPO;
			aux++;
			tamanho_maximo_navio--;
		}
		break;
	}
}

void sorteia_navios_por_jogador(char naviosJogador[MAXLIN][MAXCOL], int linhas, int colunas, int navios) {
	int n, menor_lado_tabuleiro = (linhas < colunas) ? linhas : colunas;
	for (n = 1; n <= navios; n++) {
		adiciona_navio_em_posicao_aleatoria(naviosJogador, linhas, colunas, navios, menor_lado_tabuleiro);
	}
}

void sorteia_navios(char naviosJogador1[MAXLIN][MAXCOL], char naviosJogador2[MAXLIN][MAXCOL], int linhas, int colunas, int navios) {
	sorteia_navios_por_jogador(naviosJogador1, linhas, colunas, navios);
	sorteia_navios_por_jogador(naviosJogador2, linhas, colunas, navios);
}

