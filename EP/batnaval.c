/*
*	Introducao a Programacao - VERAO 2013 - IME - USP
*	Prof. Neuton de Oliveira Braga Jr
*
*	Exercicio Programa - BATALHA NAVAL
*
*	Arquivo principal do jogo (contem a main)
*
*	Aluno : Eric Vinicius Camargo de Campos
*	Turma : Manha
*
*
*
* Declaracao de bibliotecas padroes
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/*
 * Declaracao de bibliotecas criadas para este EP
 */
#include "batnaval.h"
#include "gerador_navio.h"
#include "impressao_matriz.h"

/*
 * Declaracoes de variaveis globais
 */
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

	while(navios < 2 || navios > max_navios){
		printf("Digite o numero de navios(2 a %d): ", max_navios);
		scanf("%d", &navios);

		if(navios < 2 || navios > max_navios){
			printf("Por favor digite um numero entre 2 e %d!\n", max_navios);
		}
	}

	return navios;
}
/*
 * Esta funcao marca o ataque do usuario
 */
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

/*
 * Funcao para definir quem vai ser o primeiro a jogar.
 * Esta funcao tambem verifica se o ataque e valido.
 */
int pergunta_quem_comeca_a_partida() {
	int primeiro = 0;

	while(primeiro < 1 || primeiro > 2){
		printf("Digite qual jogador ira comecar(1 ou 2)? ");
		scanf("%d", &primeiro);

		if(primeiro < 1 || primeiro > 2){
			printf("Por favor digite um numero entre 1 e 2!\n");
		}
	}

	return primeiro;
}

/*
 * Esta funcao guarda a linha e a coluna do ataque do jogador 1.
 * Esta funcao tambem verifica se o ataque e valido.
 */
void faz_ataque_jogador1(linhas, colunas) {
	int ataqueLinha;
	char ataqueLetraColuna;

	printf(" Esperando Ataque do jogador 1?");
	scanf(" %c", &ataqueLetraColuna);
	scanf("%d", &ataqueLinha);

	while(ataqueLinha > linhas || converteLetra(ataqueLetraColuna) > colunas){
		printf("Ataque invalido!\n");
		printf(" Esperando Ataque do jogador 1?");
		scanf(" %c", &ataqueLetraColuna);
		scanf("%d", &ataqueLinha);
	}

	printf("\n\n");
	marca_ataque(ataqueLinha, ataqueLetraColuna, 1);

}

/*
 * Esta funcao guarda a linha e a coluna do ataque do jogador 1.
 */
void faz_ataque_jogador2(linhas, colunas) {
	int ataqueLinha;
	char ataqueLetraColuna;

	printf(" Esperando Ataque do jogador 2?");
	scanf(" %c", &ataqueLetraColuna);
	scanf("%d", &ataqueLinha);

	while(ataqueLinha > linhas || converteLetra(ataqueLetraColuna) > colunas){
		printf("Ataque invalido!\n");
		printf(" Esperando Ataque do jogador 2?");
		scanf(" %c", &ataqueLetraColuna);
		scanf("%d", &ataqueLinha);
	}

	printf("\n\n");

	marca_ataque(ataqueLinha, ataqueLetraColuna, 2);
}

/*
 * Esta funcao verifica se alguns dos jogadores ganhou.
 */
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
	/*
	 * Declaracao de variaveis do main.
	 */
	int linhas = 0, colunas = 0, navios;

	/*
	 * Imprime a introducao do programa
	 */
	imprime_cabecalho_programa();

	/*
	 * Pega o numero de linhas do tabuleiro.
	 * Verifica caso seja um valor invalido.
	 */
	while(linhas < 5 || linhas > 10){
		linhas = le_numero_linhas();
		if(linhas < 5 || linhas > 10){
			printf("Por favor digite um numero entre 5 e 10!\n");
		}
	}

	/*
	 * Pega o numero de colunas do tabuleiro.
	 * Verifica caso seja um valor invalido.
	 */
	while(colunas < 5 || colunas > 14){
		colunas = le_numero_colunas();
		
		if(colunas < 5 || colunas > 14){
				printf("Por favor digite um numero entre 5 e 14!\n");
		}
	}

	/*
	 * Faz a leitura da quantidade de navios.
	 * Dentro da funcao verfica caso seja um valor invalido.
	 */
	navios = le_numero_navios(linhas, colunas);


	/*
	 * Limpa as matrizes.
	 */
	limpa_matrizes(tabuleiroJogador1, tabuleiroJogador2, naviosJogador1, naviosJogador2);

	/*
	 * Sorteia a posicao dos navios.
	 */
	sorteia_navios(naviosJogador1, naviosJogador2, linhas, colunas, navios);

	/*
	 * Verifica caso seja o jogador 2 que ira comecar a partida.
	 */
	if (pergunta_quem_comeca_a_partida() == JOGADOR_2) {
		imprime_tabuleiros(tabuleiroJogador1, tabuleiroJogador2, linhas, colunas);
		faz_ataque_jogador2(linhas, colunas);
	}

	/*
	 * Faz o ataque dos jogadores, e apos casa a ataque imprime o tabuleiro, com o ponto marcado.
	 */
	while (ja_existe_ganhador(linhas, colunas) == NINGUEM_GANHOU) {
	imprime_tabuleiros(tabuleiroJogador1, tabuleiroJogador2, linhas, colunas);

	faz_ataque_jogador1(linhas, colunas);

	imprime_tabuleiros(tabuleiroJogador1, tabuleiroJogador2, linhas, colunas);

		if (ja_existe_ganhador(linhas, colunas) == NINGUEM_GANHOU) {
			faz_ataque_jogador2(linhas, colunas);
		}
	}

	/*
	 * Verifica caso um dos dois jogadores ja ganhou o jogo.
	 */
	if(ja_existe_ganhador(linhas, colunas) == JOGADOR_1_GANHOU){
		imprime_tabuleiros(tabuleiroJogador1, tabuleiroJogador2, linhas, colunas);
		printf("Parabens o Jogador 1 ganhou!");

	} else if (ja_existe_ganhador(linhas, colunas) == JOGADOR_2_GANHOU){
		imprime_tabuleiros(tabuleiroJogador1, tabuleiroJogador2, linhas, colunas);
		printf("Parabens o Jogador 2 ganhou!");
	}

	return 0;
}
