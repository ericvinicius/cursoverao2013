#include "definicoes.h"

#ifdef BATNAVAL_H
#define BATNAVAL_H

/* funcao para converter uma letra para o seu numero representante. Ex.: a = 1, b = 2, c = 3... etc. */
int converteLetra(char letra);

/* Leitura da quantidade de linhas e colunas */
int le_numero_linhas();
int le_numero_colunas();

int le_numero_navios(int linhas, int colunas);

void marca_ataque(char tentativas[MAXLIN][MAXCOL], int ataqueLinha, char letraDaColuna);

int pergunta_quem_comeca_a_partida();

void faz_ataque_jogador1();

void faz_ataque_jogador2();

int ja_existe_ganhador();

#endif
