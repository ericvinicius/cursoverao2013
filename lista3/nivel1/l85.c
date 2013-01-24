#include<stdio.h>
int main(){
	int n;

	printf("Digite um ano: ");
	scanf("%d", &n);

	if(((n % 4 == 0) && (n % 100 != 0)) || (n % 400 == 0)){
		printf("O ano %d eh bissexeto. \n", n);
	} else {
		printf("O ano %d nao eh bissexto. \n", n);
	}
	
	return 0;
}
