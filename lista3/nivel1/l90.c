#include<stdio.h>
int main(){
	int i, j, n;

	printf("Digite um numero: ");
	scanf("%d", &n);

	for(i = 1; 1; i++){
		if(i >= n){
			break;
		} else if(i*i == n){
			j = i;
		}
	} 
	
	if(j > 0){
		printf("o numero e perfeito, %d * %d = %d. \n", j, j, n);
	} else {
		printf("O numero, nao eh perfeito.\n");
	}
		
	return 0;
} 	 
