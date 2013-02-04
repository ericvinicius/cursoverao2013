#include<stdio.h>
int main(){
	int n, res, guardaDigitos[1000], i, ultimo;


	printf("Digite um numero na base decimal: ");
	scanf("%d", &n);


	for(i = 0; n >= 1; n /= 8){
		res = n % 8;
	  	i++;
	  	guardaDigitos[i] = res;

	}

	for(ultimo = i ;ultimo > 0; ultimo--){
		printf("%d", guardaDigitos[ultimo]);
	}

	printf("\n");





	return 0;
}