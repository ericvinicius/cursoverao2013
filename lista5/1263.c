/* 
* Introducao a Programacao - VERAO 2013 - IME - USP
* Prof. Neuton de Oliveira Braga Jr
* 5 Lista de Exercicios
*
* URI Online Judge - www.urionlinejudge.com.br
* Problema 1263
*
* Aluno: Eric Vinicius Camargo de Campos
*
* Turma: Manha
*/
#include<stdio.h>
/*funcao que faz a comparacao de dois chars, ignorando o letras maiusculas ou minusculas*/
int cmp(char a, char b) {
	if (a == b) {
		return 0;
	}
	/*retorna -1 caso a seja menor que b*/
	if (a < b) {
		if (a + 32 == b) {
			/*retorna 0 caso as duas sejam iguais, ignorando maiusculas ou minusculas*/
			return 0;
		} else {
			return -1;
		}
	/*retorna 1 caso a seja maior que b*/
	} else {
		if (b + 32 == a) {
			/*retorna 0 caso as duas sejam iguais, ignorando maiusculas ou minusculas*/
			return 0;
		} else {
			return 1;
		}
	}
}

/*Funcao para verificar tautograma*/
void verificaIgualdade(char frase[]) {
	/*declarao de variaveis*/
	char letra;
	int igualdade, j, pos;
	/*Define a primeira letra*/
	letra = frase[0];

	/*Verifica caso seja um '*' */
	if(frase[0] == EOF){
		return;
	}

	igualdade = 0;
	for(pos = 0; frase[pos] != '\n'; pos++){
		/*laco para percorrer a proxima palavra*/
		for( ; frase[pos] != ' ' && frase[pos] != '\n'; pos++){}

		/*Verificacao caso seja o '\n'*/
		if (frase[pos] == '\n') {
			break;
		}

		pos++;

		j = cmp(letra, frase[pos]);
		/*verifica se e uma igualdade e imprime a resposta*/
		if(j != 0){
			igualdade = 0;
			break;
		} else {
			igualdade += 1;
			letra = frase[pos];
		}
	}
	printf("%d\n", igualdade);
}

int main() {
	/*Declaracao de variaveis*/
	char frase[1050];
	/*Laco para verificar caso seja um tautograma, ate que seja um '*' */
	do {
		/*Leitura da frase*/
		fgets(frase, 1050, stdin);
		/*chama a funcao que verifica se e um tautograma*/
		verificaIgualdade(frase);
	} while(frase[0] != EOF);

	return 0;
}
