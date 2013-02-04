#include<stdio.h>
int main(){
	int par[5], impar[5], n, i, contPar, contImpar, j;
	contImpar = 0;
	contPar = 0;

	for(i = 1; i <= 15; i++){
		scanf("%d", &n);

		if(n % 2 == 0){
			par[contPar] = n;
			contPar++;
		} else {
			impar[contImpar] = n;
			contImpar++;
		}

		if(contPar == 5){
			for(j = 0; j <= contPar-1; j++){
				printf("Par[%d] = %d\n", j, par[j]);
			}
			contPar = 0;
		} else if (contImpar == 5){
			for(j = 0; j <= contImpar-1; j++){
				printf("Impar[%d] = %d\n", j, impar[j]);
			}
			contImpar = 0;
		}
	}

	for( ;contImpar > 0; j++){
		if(j == 5){
			j = 0;
		}
		printf("Impar[%d] = %d\n", j, impar[j]);
		contImpar--;
	}
	j = 0;
	for( ;contPar > 0; j++){
		if(j == 5){
			j = 0;
		}
		printf("Par[%d] = %d\n", j, par[j]);
		contPar--;
	}



	return 0;
}