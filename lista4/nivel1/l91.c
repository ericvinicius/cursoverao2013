#include<stdio.h>
int main(){
	int i, j, n, k;
	j = 0;

	printf("Digite um numero: ");
	scanf("%d", &n);

	for(i = 1; (i*i*i) <= n; i++){
		k = i*i; 
		if((k*i) == n){
			j = i;
			break;
		}
	} 
	
	if(j == 0){
		printf("O numero, nao eh um cubo perfeito.\n");
	} else {
		printf("O numero e um cubo perfeito, %d * %d * %d = %d. \n", j, j, j, n);
	}
		
	return 0;
} 	