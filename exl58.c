#include<stdio.h>
int main(){
	int num;
	int result;

	printf("Digite um numero: ");
	scanf("%d", &num);
	
	result = 5 * num  * num - 4 * num + 1;

	printf("O resultado eh: %d \n", result);


	return 0;
}
	
