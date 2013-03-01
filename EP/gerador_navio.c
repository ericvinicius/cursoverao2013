/*
*	Introducao a Programacao - VERAO 2013 - IME - USP
*	Prof. Neuton de Oliveira Braga Jr
*
*	Exercicio Programa - BATALHA NAVAL
*
*	Funcoes especificas para configuracao, gerenciamento e execucao do jogo batalha naval .
*
*	Aluno : Eric Vinicius Camargo de Campos
*	Turma : Manha
*
*
*
*
* Declaracao de bibliotecas criadas para este EP
*/
#include "gerador_navio.h"
#include "definicoes.h"

/*
 *Declaracoes de bibliotecas padroes
 */
#include <stdlib.h>

/*
 * Esta funcao adiciona um navio em uma posicao aleatorio do tabuleiro
 */
void adiciona_navio_em_posicao_aleatoria(char naviosJogador[MAXLIN][MAXCOL], int linhas, int colunas, int navios, int tamanho_maximo_navio) {
	/* Gera uma posicao aleatoria de um navio */
	int lin, col, aux, sentido;

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

/*
 * Esta funcao sorteia os navios para cada jogador
 */
void sorteia_navios_por_jogador(char naviosJogador[MAXLIN][MAXCOL], int linhas, int colunas, int navios) {
	int n, menor_lado_tabuleiro = (linhas < colunas) ? linhas : colunas;
	for (n = 1; n <= navios; n++) {
		adiciona_navio_em_posicao_aleatoria(naviosJogador, linhas, colunas, navios, menor_lado_tabuleiro);
	}
}

/*
 * Esta funcoa sorteia os navios para os dois jogadores
 */
void sorteia_navios(char naviosJogador1[MAXLIN][MAXCOL], char naviosJogador2[MAXLIN][MAXCOL], int linhas, int colunas, int navios) {
	sorteia_navios_por_jogador(naviosJogador1, linhas, colunas, navios);
	sorteia_navios_por_jogador(naviosJogador2, linhas, colunas, navios);
}

