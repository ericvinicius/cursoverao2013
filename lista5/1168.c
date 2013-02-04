#include<stdio.h>
int verificaDigitos(int res){
	int soma = 0;
	switch (res){
		case 1: 
			soma += 2;
			break;
		case 2:
			soma += 5;
			break;
		case 3: 
			soma += 5;
			break;
		case 4: 
			soma += 4;
			break;
		case 5: 
			soma += 5;
			break;
		case 6: 
			soma += 6;
			break;
		case 7: 
			soma += 3;
			break;
		case 8: 
			soma += 7;
			break;
		case 9: 
			soma += 6;
			break;
		case 0: 
			soma += 6;
			break;
	}
	return soma;
}

int digitos(int n){
	int res, soma;
	soma = 0;
	for ( ; n > 0; n /= 10){
		res = n % 10;
		soma += verificaDigitos(res);
	}
	return soma;
}

int main(){
	int n, numero[1000], i, soma;
	soma = 0;

	scanf("%d", &n);

	for(i = 1; i <= n; i++){
		scanf("%d", &numero[i]);
		soma = digitos(numero[i]);
		printf("%d leds\n", soma);
	}
	return 0;
}