#include<stdio.h>
int main(){
	float n;

	scanf("%f", &n);

	if(n >= 0.0 && n <= 25.0){
		printf("Intervalo [0,25]\n");

	} else if(n >= 25.00001 && n <= 50.0){
		printf("Intervalo (25,50]\n");

	} else if(n >= 50.00001 && n <= 75.0){
		printf("Intervalo (50,75]\n");

	} else if(n >= 75.00001 && n <= 100.0){
		printf("Intervalo (75,100]\n");

	} else if(n < 0.0 || n > 100.0){
		printf("Fora do Intervalo\n");
	}
	return 0;
}