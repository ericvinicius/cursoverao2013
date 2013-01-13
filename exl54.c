#include<stdio.h>

int main(){

	double x;
	int v;

	printf("O tamanho de short int eh %ld bytes.\n",sizeof(short int));

	printf("O Tamanho de long double eh %Lf bytes. \n", sizeof(long double));

	printf("O tamanho de long int eh %pr bytes.\n",sizeof(void));

	printf("O tamanho de signed long int eh %ld bytes.\n",sizeof(signed long int));

	return 0;

}
