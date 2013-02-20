#include "definicoes.h"

#ifndef IMPRESSAO_MATRIZ_H_
#define IMPRESSAO_MATRIZ_H_

/* Funcao para imrprimir o nomes dos jogadore em cima dos tabuleiros */
void imprimeEspacosNomes(int colunas);

void imprimeLinha(int qtd_colunas, int linha, char tabuleiroJogador1[MAXLIN][MAXCOL], char tabuleiroJogador2[MAXLIN][MAXCOL]);

void imprimeTabuleiro(int linhas, int colunas, char tabuleiroJogador1[MAXLIN][MAXCOL], char tabuleiroJogador2[MAXLIN][MAXCOL]);

/* funcao para limpar a matriz colocando VAZIOS */
void limpa_matriz(char matriz[MAXLIN][MAXCOL]);

/* Funcao para DEBUG, para mostrar a matriz do tabuleiro */
void DEBUG_imprime_tabuleiro(char tabuleiro[MAXLIN][MAXCOL]);

void imprime_tabuleiros(char tabuleiroJogador1[MAXLIN][MAXCOL], char tabuleiroJogador2[MAXLIN][MAXCOL], int linhas, int colunas);

void limpa_matrizes(char tabuleiroJogador1[MAXLIN][MAXCOL], char tabuleiroJogador2[MAXLIN][MAXCOL], char naviosJogador1[MAXLIN][MAXCOL],
		char naviosJogador2[MAXLIN][MAXCOL]);

#endif /* IMPRESSAO_MATRIZ_H_ */
