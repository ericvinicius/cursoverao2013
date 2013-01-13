#include<stdio.h>
int main(){
	float x;
	printf("Digite um numero fracionado: ");
	scanf("%f",&x);
	printf("Com ponto flutuante eh: %f \n",x);
	printf("Em notacao cientifica eh: %e \n",x);
	printf("A menor forma de escreve-lo eh: %g \n",x);
	return 0;
}

