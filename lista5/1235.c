/* 
* Introducao a Programacao - VERAO 2013 - IME - USP
* Prof. Neuton de Oliveira Braga Jr
* 5 Lista de Exercicios
*
* URI Online Judge - www.urionlinejudge.com.br
* Problema 1235
*
* Aluno: Eric Vinicius Camargo de Campos
*
* Turma: Manha
*/
#include <stdio.h>
#include <string.h>
/*funcao para inverter as palavras*/
void inverte(char input[], int pos, int n) {
	int i;
	for (i = n - 1; i >= pos; i--) {
		printf("%c", input[i]);
	}
}

int main() {
	/*declaracao de variaveis*/
	int i, n, numeroCaracteres;
	char str[101];

	/* Entrada do numero de palavras */
	scanf("%d ", &n);

	/* Laco para fazer n palavras */
	for(i = 0; i < n; i++){
		/* Entrada da palavra atual */
		fgets(str, 100, stdin);

		/*conta o numero de caracteres*/
		numeroCaracteres = strlen(str);
		/*chama a funcao inverte para inverter a primeira metade da palavra*/
		inverte(str, 0, numeroCaracteres / 2);
		/*chama a funcao inverte para inverter a segunda metade da palavra*/
		inverte(str, (numeroCaracteres / 2), numeroCaracteres - 1);
		printf("\n");
	}

	return 0;
}