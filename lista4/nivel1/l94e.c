#include<stdio.h>
int main(){
	int n1, n2, n, aux;

	printf("Digite um numero: ");
	scanf("%d", &n);

	aux = n;
	n2 = 40;
	for(n1 = 53; n > 0; n --){
		if(n > (aux - 2)){
			continue;
		} else {
			aux -= 2;
			n1 -= 13;
		}
	}

	printf("O termo do numero informado: %d .\n", n1);


	return 0;
}