#include<stdio.h>

int main(){
	int n, i, res = 7;

	printf("Digite um numero: ");
	scanf("%d", &n);

	for(i = 1; i < n; i++){
		if(i % 2 == 0){
			res -= 2;
		} else {
			res += 3;
		}
	}

	printf("A posicao %d, eh: %d .\n", n, res);
	return 0;
}



