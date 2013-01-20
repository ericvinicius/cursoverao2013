#include<stdio.h>
int main(){
	short int num;
	printf("Por favor, digite um numero: ");
	scanf("%hd", &num);
	printf("O numero que voce digitou eh: %lu. \n", num);
	return 0;
}
