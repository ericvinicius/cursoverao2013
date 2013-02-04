#include<stdio.h>
int main(){
	int n, res;


	printf("Digite um numero na base decimal: ");
	scanf("%d", &n);

	for( ; n >= 1; n /= 8){
		res = n % 8;
		printf("%d", res);
	}

	printf("\n");





	return 0;
}