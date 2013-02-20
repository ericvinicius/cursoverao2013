/* 
* Introducao a Programacao - VERAO 2013 - IME - USP
* Prof. Neuton de Oliveira Braga Jr
* 5 Lista de Exercicios
*
* URI Online Judge - www.urionlinejudge.com.br
* Problema 1140
*
* Aluno: Eric Vinicius Camargo de Campos
*
* Turma: Manha
*/
#include<stdio.h>
/*funcao que faz a comparacao de dois chars, ignorando o letras maiusculas ou minusculas*/
int cmp(char a, char b) {

	/*Retorna 0 caso eles sejam iguais*/
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
void verificaTautograma(char frase[]) {
	/*declarao de variaveis*/
	char letra;
	int tautograma, j, pos;
	/*Define a primeira letra*/
	letra = frase[0];

	/*Verifica caso seja um '*' */
	if(frase[0] == '*'){
		return;
	}

	tautograma = 1;
	/*Laco para verificar caso seja um '\n'*/
	for(pos = 0; pos != '\n'; ) {

		/*laco para percorrer a proxima palavra*/
		for(; frase[pos] != ' ' && frase[pos] != '\n'; pos++){}

		/*Verificacao caso seja o '\n'*/
		if (frase[pos] == '\n') {
			break;
		}

		pos++;

		j = cmp(letra, frase[pos]);
		/*verifica se e um tautograma e imprime a resposta*/
		if(j != 0){
			tautograma = 0;
			break;
		}
	}

	if (tautograma == 0) {
		printf("N\n");
	} else { 
		printf("Y\n");
	}
}

int main() {
	/*Declaracao de variaveis*/
	char frase[1050];
	/*Laco para verificar caso seja um tautograma, ate que seja um '*' */
	do {
		/*Leitura da frase*/
		fgets(frase, 1050, stdin);
		/*chama a funcao que verifica se e um tautograma*/
		verificaTautograma(frase);
	} while(frase[0] != '*');

	return 0;
}
