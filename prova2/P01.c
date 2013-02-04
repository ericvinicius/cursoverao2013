#include<stdio.h>
void horizontal(int n, int corrente){
 	int i = corrente * 2 -1;
	for( ; n - corrente > 0; corrente++){
		printf("   ");
	}

	printf("--+");

	for ( ; i > 0; i--){
		printf("   ");
	}

	printf("+--\n");
	return ;
}

void vertical(int n, int corrente){
	int i = corrente * 2 -1;

	int correnteTemp = corrente;
	for( ; n - corrente > 0; corrente++){
		printf("   ");
	}

	printf("  |");

	for ( ; i > 0; i--){
		if(correnteTemp == 1){
			printf("_ _");
		} else {
			printf("   ");
		}
	}

	printf("|  \n");
	return ;
}
int main(){
	int n, corrente;

	printf("Digite um numero inteiro: \n");
	scanf("%d", &n);

	corrente = n;
	for (corrente = n; corrente >= 1; corrente--){
		horizontal(n, corrente);
		vertical(n, corrente);
	}


	return 0;
}