#include "definicoes.h"

#ifdef GERADOR_NAVIO_H
#define GERADOR_NAVIO_H

void adiciona_navio_em_posicao_aleatoria(char naviosJogador[MAXLIN][MAXCOL], int linhas, int colunas, int navios, int tamanho_maximo_navio);

void sorteia_navios_por_jogador(char naviosJogador[MAXLIN][MAXCOL], int linhas, int colunas, int navios);

void sorteia_navios(char naviosJogador1[MAXLIN][MAXCOL], char naviosJogador2[MAXLIN][MAXCOL], int linhas, int colunas, int navios);

#endif
