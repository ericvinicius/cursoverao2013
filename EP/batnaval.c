#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#include "batnaval.h"
#include "gerador_navio.h"
#include "impressao_matriz.h"

char naviosJogador1[MAXLIN][MAXCOL];
char naviosJogador2[MAXLIN][MAXCOL];

char tabuleiroJogador1[MAXLIN][MAXCOL];
char tabuleiroJogador2[MAXLIN][MAXCOL];

/*Imprime a Parte inicial do programa.*/
void imprime_cabecalho_programa() {
	printf("/****************************************************************************\n");
	printf("*                  Introducao a Programacao - Verao 2013 - IME-USP          *\n");
	printf("*                        Prof. Neuton de Oliveira Braga Jr                  *\n");
	printf("*                                                                           *\n");
	printf("*                         BATALHA NAVAL por Eric Vinicius                   *\n");
	printf("*                     __/___                                 __/___         *\n");
	printf("*               _____/______|                          _____/______|        *\n");
	printf("*       _______/_____\\_______\\_____            _______/_____\\_______\\_____  *\n");
	printf("*       \\               <<<       |            \\               <<<       |  *\n");
	printf("*       ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~* *\n");
	printf("*****************************************************************************/\n");
}

/* funcao para converter uma letra para o seu numero representante. Ex.: a = 1, b = 2, c = 3... etc. */
int converteLetra(char letra) {
	int numero = letra - 96;
	return numero;
}

/* Leitura da quantidade de linhas */
int le_numero_linhas() {
	int linhas = 0;
	printf("Digite o numero de linhas(5 a 10): ");
	scanf("%d", &linhas);

	return linhas;
}

/* Leitura da quantidade de colunas */
int le_numero_colunas() {
	int colunas = 0;

	printf("Digite o numero de colunas(5 a 14): ");
	scanf("%d", &colunas);

	return colunas;
}
/*Leitura da quantidade de navios*/
int le_numero_navios(int linhas, int colunas) {
	int navios = 0;
	int max_navios;

	max_navios = (linhas + colunas) / 2;

	printf("Digite o numero de navios(2 a %d): ", max_navios);
	scanf("%d", &navios);

	return navios;
}

void marca_ataque(int ataqueLinha, char letraDaColuna, int jogador) {
	int coluna = converteLetra(letraDaColuna);

	if (jogador == 1 && naviosJogador1[ataqueLinha][coluna] == NAVIO_CORPO) {
		tabuleiroJogador1[ataqueLinha][coluna] = ACERTOU_ATAQUE;

	} else if (jogador == 2 && naviosJogador2[ataqueLinha][coluna] == NAVIO_CORPO) {
		tabuleiroJogador2[ataqueLinha][coluna] = ACERTOU_ATAQUE;

	} else if (jogador == 1 && naviosJogador1[ataqueLinha][coluna] != NAVIO_CORPO) {
		tabuleiroJogador1[ataqueLinha][coluna] = ERROU_ATAQUE;

	} else if (jogador == 2 && naviosJogador2[ataqueLinha][coluna] != NAVIO_CORPO) {
		tabuleiroJogador2[ataqueLinha][coluna] = ERROU_ATAQUE;
	}
}

int pergunta_quem_comeca_a_partida() {
	int primeiro;
	printf("Digite qual jogador ira comecar(1 ou 2)? ");
	scanf("%d", &primeiro);

	return primeiro;
}

void faz_ataque_jogador1() {
	int ataqueLinha = 7;
	char ataqueLetraColuna = 'b';

	printf("Esperando Ataque do jogador 1? ");
	scanf("%c", &ataqueLetraColuna);
	scanf("%d ", &ataqueLinha);

	marca_ataque(ataqueLinha, ataqueLetraColuna, 1);
}

void faz_ataque_jogador2() {
	int ataqueLinha = 8;
	char ataqueLetraColuna = 'c';

	printf("Esperando Ataque do jogador 2? ");
	/* scanf("%c %d", &ataqueLetraColuna, &ataqueLinha); */

	marca_ataque(ataqueLinha, ataqueLetraColuna, 2);
}

int ja_existe_ganhador(int linhas, int colunas) {
	int lin, col;
	char pos_tab1, pos_nav1, pos_tab2, pos_nav2;

	int status_jogador1 = JOGADOR_1_GANHOU;
	int status_jogador2 = JOGADOR_2_GANHOU;

	for (lin = 1; lin <= linhas; lin++) {
		for (col = 1; col <= colunas; col++) {

			pos_tab1 = tabuleiroJogador1[lin][col];
			pos_nav1 = naviosJogador1[lin][col];

			/* Se tem navio na posicao e nao tem um acerto no tabuleiro, entao o jogador ainda nao ganhou */
			if (pos_nav1 == NAVIO_CORPO && pos_tab1 != ACERTOU_ATAQUE) {
				status_jogador1 = JOGADOR_1_NAO_GANHOU;
			}

			pos_tab2 = tabuleiroJogador2[lin][col];
			pos_nav2 = naviosJogador2[lin][col];

			/* Se tem navio na posicao e nao tem um acerto no tabuleiro, entao o jogador ainda nao ganhou */
			if (pos_nav2 == NAVIO_CORPO && pos_tab2 != ACERTOU_ATAQUE) {
				status_jogador2 = JOGADOR_2_NAO_GANHOU;
			}
		}
	}

	if (status_jogador1 == JOGADOR_1_GANHOU) {
		return JOGADOR_1_GANHOU;
	}

	if (status_jogador2 == JOGADOR_2_GANHOU) {
		return JOGADOR_2_GANHOU;
	}

	return NINGUEM_GANHOU;
}

int main() {
	int linhas, colunas, navios;

	imprime_cabecalho_programa();

	linhas = le_numero_linhas();
	colunas = le_numero_colunas();
	navios = le_numero_navios(linhas, colunas);

	limpa_matrizes(tabuleiroJogador1, tabuleiroJogador2, naviosJogador1, naviosJogador2);

	sorteia_navios(naviosJogador1, naviosJogador2, linhas, colunas, navios);

	/* TODO: Falta melhorar bastante a funcao >> imprime_tabuleiros << */

	/* if (pergunta_quem_comeca_a_partida() == JOGADOR_2) { */
	imprime_tabuleiros(tabuleiroJogador1, tabuleiroJogador2, linhas, colunas);
	faz_ataque_jogador2();
	/* } */

	/* while (ja_existe_ganhador() == NINGUEM_GANHOU) { */
	imprime_tabuleiros(tabuleiroJogador1, tabuleiroJogador2, linhas, colunas);

	faz_ataque_jogador1();

	imprime_tabuleiros(tabuleiroJogador1, tabuleiroJogador2, linhas, colunas);

	/*
	 if (ja_existe_ganhador() == NINGUEM_GANHOU) {
		faz_ataque_jogador2();
		}
	}*/

	return 0;
}
