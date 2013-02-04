#include<stdio.h>
int main(){
	int i, j, n;

	printf("Digite um numero: ");
	scanf("%d", &n);

	for(i = 1; i*i <= n; i++){
		j = 0;
		if(i*i == n){
			j = i;
			break;
		}
	} 
	
	if(j == 0){
		printf("O numero, nao eh perfeito.\n");
	} else {
		printf("O numero eh perfeito, %d * %d = %d. \n", j, j, n);
	}
		
	return 0;
} 	 