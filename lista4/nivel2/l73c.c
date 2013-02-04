#include<stdio.h>
int main(){
	int n, i, aux, cont;

	printf("Digite um numero: ");
	scanf("%d", &n);

	printf("\n");

	i = 1;
	for (cont = n; cont >= 1; cont--){
		for(aux = n; aux >= 1; aux--){
			printf("%02d ", i);
			i++;
		}
		printf("\n");
	}	


	printf("\n");



	return 0;
}