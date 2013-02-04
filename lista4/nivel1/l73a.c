#include<stdio.h>
void horizontal(int n, int corrente){
	for( ; n - corrente > 0; corrente++){
		printf("   ");
	}

	printf("+--+\n");

	return ;
}
void vertical(int n, int corrente){
	for( ; n - corrente > 0; corrente++){
		printf("   ");
	}

	printf("   |\n");

	return ;
}
int main(){
	int n, corrente;

	printf("Digite um numero inteiro: \n");
	scanf("%d", &n);

	printf("--+\n");
	printf("  |\n");

	corrente = n;
	for (corrente = n; (corrente-1) >= 1; corrente--){
		printf("  ");
		horizontal(n, corrente);
		printf("  ");
		vertical(n, corrente);
	}

	return 0;
}