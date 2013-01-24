#include<stdio.h>
int main(){
	int n, i, cont = 0;

	printf("Digite um numero: ");
	scanf("%d", &n);

	for(i = 10; n > i; ){
		n /= i;	
		cont++;
	}

	printf("O numero possui %d digito(s). \n", cont+1);

	return 0;
}
