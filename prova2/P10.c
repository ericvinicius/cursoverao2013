#include<stdio.h>
int main(){
	double b, B, h, A;

	printf("Digite a base menor, a base maior, e a altura: \n");
	scanf("%lf %lf %lf", &b, &B, &h);

	if(B < b){
		printf("Erro, Digite a base MENOR e depois a base MAIOR. \n");
		return 0;
	}

	A = ((B + b) / 2) * h;

	printf("A area do trapezio eh: %f .\n", A);

	return 0;
}