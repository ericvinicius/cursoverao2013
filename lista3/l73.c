#include<stdio.h>
int main(){
	int n, i;

	printf("Digite um numero: ");
	scanf("%d", &n);


	for(i = n; i > 0; i--){
		printf("+--+\n");
		printf("   |\n"); 
		printf("   +");
	}


	return 0;
}
