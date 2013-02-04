#include<stdio.h>

#define M 1000
#define D 500
#define C 100
#define L 50
#define X 10
#define V 5
#define I 1

int printLetra(int valor, int valorDaLetra, int valorLetraAnterior, char letraAnterior, char letra, char proximaLetra) {

	int qtdAlgarismosIncrementado, qtdAlgarismos = valor / valorDaLetra;

	if (qtdAlgarismos == 4 && letra != 'M') {
		printf("%c%c", letra, proximaLetra);

	} else {
		for ( ; qtdAlgarismos >= 1; qtdAlgarismos--) {
			printf("%c", letra);
		}

		valor = valor % valorDaLetra;
	}

	qtdAlgarismosIncrementado = (valor + valorLetraAnterior) / valorDaLetra;

	if (qtdAlgarismosIncrementado == 1 && letra != 'I') {
		printf("%c%c", letraAnterior, letra);
		return (valor + valorLetraAnterior) % valorDaLetra;
	} 

	return valor % valorDaLetra;
}

void printRomano(int valor) {
	
	valor = printLetra(valor, M, C, 'C', 'M', ' ');

	valor = printLetra(valor, D, C, 'C', 'D', 'M');
	
	valor = printLetra(valor, C, X, 'X', 'C', 'D');
	
	valor = printLetra(valor, L, X, 'X', 'L', 'C');
	
	valor = printLetra(valor, X, I, 'I', 'X', 'L');

	valor = printLetra(valor, V, I, 'I', 'V', 'X');

	valor = printLetra(valor, I, 0, ' ', 'I', 'V');
}


int main(){
	int n;

	printf("Digite o numero que queira converter: ");
	scanf("%d", &n);

	printRomano(n);

	printf("\n");

	return 0;
}