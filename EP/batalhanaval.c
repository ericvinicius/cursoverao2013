#include<stdio.h>

#define MAX_COL MAX_COL
#define MAX_LIN MAX_LIN


/*Declaracoes de variaveis globais*/
int linhas = 0;
int colunas = 0;

/* funcao para converter uma letra para o seu numero representante. Ex.: a = 1, b = 2, c = 3... etc. */
int converteLetra(char letra){
	int numero = letra - 96;
	return numero;
}

/*Funcao para imrprimir o nomes dos jogadore em cima dos tabuleiros*/
void imprimeEspacosNomes(int colunas){
	int espacosNome, i;

	espacosNome = ((((2 * colunas) + 1) - 9) / 2);
	printf("   ");
	for(i = 0; i <= espacosNome; i++){
		printf(" ");
	}
	printf("Jogador 1");
	for(i = 0; i <= espacosNome; i++){
		printf(" ");
	}
	for(i = 0; i <= espacosNome; i++){
		printf(" ");
	}
	printf("Jogador 2\n");
}

void imprimeLinha(int qtd_colunas, int legenda_da_linha, char tentativasJogador1[MAX_LIN][MAX_COL], char tentativasJogador2[MAX_LIN][MAX_COL]){
	int i;

	/*Imprimir linha '-+' <  */
	printf("   +");

	for(i = 1; i <= qtd_colunas; i++){
		printf("-+");
	}
	printf(" ** ");
	printf("+");

	for(i = 1; i <= qtd_colunas; i++){
		printf("-+");
	}
	printf("\n");
	/* ate aqui >  */
	
	printf("%2d", legenda_da_linha);
	printf(" |");

	/* Imprimir a linha do tabuleiro 1: */
	for(i = 1; i <= qtd_colunas; i++){
		printf("tentativasJogador1[%d][%d] == %c\n", i, legenda_da_linha, tentativasJogador2[i][legenda_da_linha]);
		if (tentativasJogador1[i][legenda_da_linha] == 'X') {
			printf("X|");	
		} else {
			printf(" |");
		}
	}

	printf(" ** ");
	printf("|");

	/* Imprimir a linha do tabuleiro 2: */
	for(i = 1; i <= qtd_colunas; i++){

		printf("tentativasJogador2[%d][%d] == %c\n", i, legenda_da_linha, tentativasJogador2[i][legenda_da_linha]);
		if (tentativasJogador2[i][legenda_da_linha] == 'X') {
			printf("X|");	
		} else {
			printf(" |");
		}
	}
	printf("\n");
}

void impressaoTabuleiro(int linhas, int colunas, char tentativasJogador1[MAX_LIN][MAX_COL], char tentativasJogador2[MAX_LIN][MAX_COL]){
	int i;

	for(i = 1; i <= linhas; i++){
		printf("i = %d\n", i);
		imprimeLinha(colunas, i, tentativasJogador1, tentativasJogador2);

		if(i == linhas){
			printf("   +");
			for(i = 1; i <= colunas; i++){
				printf("-+");
			}
			
			printf(" ** ");

			printf("+");
			for(i = 1; i <= colunas; i++){
				printf("-+");
			}
			printf("\n");


			/* Para imprimir as letra < */
			printf("    %c", 97); /* esta linha imprimi a letra 'a', que sempre havera */

			for(i = 98; i <= colunas + 96; i++){

				printf(" %c", i);
			}

			printf("      %c", 97);

			for(i = 98; i <= colunas + 96; i++){

				printf(" %c", i);
			}
			/* ate aqui > */
		}
	}

	printf("\n");
}
/*funcao para limpar a matriz colocando zeros */
void limpa_matriz_tentativas(char tentativas[MAX_LIN][MAX_COL]) {
	int i, j;
	for(i = 0; i <= 10; i++){
		for(j = 0; j < MAX_COL; j++){
			tentativas[i][j] = '0';
		}
	}
}

/* Funcao para DEBUG, para mostrar a matriz de tentativas */
void imprime_matriz_tentativas(char tentativas[MAX_LIN][MAX_COL]) {
	int i, j;
	for(i = 0; i <= 10; i++){
		for(j = 0; j < MAX_COL; j++){
			printf(" %c", tentativas[i][j]);
		}
		printf("\n");
	}

	printf("\n");
}

/*Leitura da quantidade de linhas e colunas */
void le_numero_linhas_e_colunas() {
	printf("Digite o numero de linhas(5 a 10): ");
	//scanf("%d", &linhas);
	linhas = 10;

	printf("Digite o numero de colunas(5 a 14): ");
	//scanf("%d", &colunas);
	colunas = 14;
}

void imprime_tabuleiros(char tentativasJogador1[MAX_LIN][MAX_COL], char tentativasJogador2[MAX_LIN][MAX_COL]) {
	imprimeEspacosNomes(colunas);
	impressaoTabuleiro(linhas, colunas, tentativasJogador1, tentativasJogador2);

	printf("\n");
}

void marca_ataque(char tentativas[MAX_LIN][MAX_COL], int ataqueLinha, char ataqueColuna) {
	int coluna = converteLetra(ataqueColuna);

	printf("ataqueColuna -------->{%c} == %d\n", ataqueColuna, coluna);
	printf("ataqueLinha -------->{%d}\n", ataqueLinha);

	tentativas[coluna][ataqueLinha] = 'X';
}

int iniciante(){
	int primeiro;
	printf("Digite qual jogador ira comecar(1 ou 2)? ");
	// scanf("%d", &primeiro);
	primeiro = 1;

	printf("\n");

	return primeiro;
}

int main(){
	int primeiro;
	char tentativasJogador1[MAX_LIN][MAX_COL];
	char tentativasJogador2[MAX_LIN][MAX_COL];

	le_numero_linhas_e_colunas();

	/* Limpeza de tentativas de ataques */
	limpa_matriz_tentativas(tentativasJogador1);
	limpa_matriz_tentativas(tentativasJogador2);

	/* Somente para DEBUG */
	//imprime_matriz_tentativas(tentativasJogador1);
	//imprime_matriz_tentativas(tentativasJogador2);

	/* TODO: Ainda falta sortear os navios de cada jogador e colocar em matrizes a parte */

	primeiro = iniciante();

	if(primeiro == 1){

		/* Somente para DEBUG */
		printf("Ataque jogador 1: \n");
		marca_ataque(tentativasJogador1, 1, 'a');	
		imprime_tabuleiros(tentativasJogador1, tentativasJogador2);

		/* Somente para DEBUG */
		//printf("Ataque jogador 2: \n");
		//marca_ataque(tentativasJogador2, 3, 'g');	
		//imprime_tabuleiros(tentativasJogador1, tentativasJogador2);

		/* Somente para DEBUG */
		//printf("Ataque jogador 1: \n");
		//marca_ataque(tentativasJogador1, 3, 'n');	
		//imprime_tabuleiros(tentativasJogador1, tentativasJogador2);

	} else if(primeiro == 2) {

		/* Somente para DEBUG */
		printf("Ataque jogador 2: \n");
		marca_ataque(tentativasJogador2, 7, 'c');	
		imprime_tabuleiros(tentativasJogador1, tentativasJogador2);

		/* Somente para DEBUG */
		printf("Ataque jogador 1: \n");
		marca_ataque(tentativasJogador1, 4, 'e');	
		imprime_tabuleiros(tentativasJogador1, tentativasJogador2);

	}

	/* Somente para DEBUG */
	imprime_matriz_tentativas(tentativasJogador1);
	imprime_matriz_tentativas(tentativasJogador2);

	return 0;
}