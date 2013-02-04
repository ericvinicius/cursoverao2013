#include<stdio.h>
int main(){
	int n, i, res;
	res = 36;

	printf("Digite um numero: ");
	scanf("%d", &n);

	for(i = 1; i < n; i++){
		if(i % 2 == 0){
			res -= 4;
		} else {
			res -= 2;
		}
	}

	printf("O Valor do numero correspondente eh: %d .\n", res);





	return 0;
}