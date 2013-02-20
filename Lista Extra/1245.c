#include<stdio.h>
int main(){
	int n, numeros[100], pares, i, j;
	char pes[100], cont[30];

	scanf("%d", &n);

	for(i = 0; i < n; i++){
		scanf("%d %c", &numeros[i], &pes[i]);
	}

	for(i = 0; i <= 30; i++){
		cont[i] = 0;
	}

	for(i = 0; i < n; i++){
		j = numeros[i] - 30;

		if(cont[j] == 0){
			cont[j] = pes[i];

		} else {
			if(pes[i] != cont[j]){
				pares++;
			}
		}
	} 

	printf("%d\n", pares);
	


	return 0;
}