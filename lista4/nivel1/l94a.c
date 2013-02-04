#include<stdio.h>
int main(){
	double n1, n;

	printf("Digite um numero: ");
	scanf("%lf", &n);

	for(n1 = 2; n > 0; n--){
		if(n == 1){
			break;
		}
		n1 /= 2;
	}

	printf("O termo do numero informado eh: %f .\n", n1);

	return 0;
}