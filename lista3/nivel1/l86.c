#include<stdio.h>
int main(){
	int d, m, a;

	printf("Digite uma data: ");
	scanf("%d %d %d", &d, &m, &a);

	if(d > 31){
		printf("Data invalida. \n");
	} else if(m > 12){
		printf("Data invalida. \n");
	} else if(m < 1 || d < 1 || a < 1){
		printf("Data invalida. \n"); 
	} else if(d > 28 && m == 2){
		printf("Data invalida. \n");
	} else if(d > 30 && m == 4){
		printf("Data invalida. \n");
	} else if(d > 30 && m == 6){
	 	printf("Data invalida. \n");
	} else if(d > 30 && m == 9){
		printf("Data invalida. \n");
	} else if(d > 30 && m == 11){
		printf("Data invalida. \n");
	} else if(((a % 4 == 0) && (a % 100 != 0)) || (a % 400 == 0)){
		printf("A data eh valida e o ano e bissexto. \n");
	} else {
		printf("A data eh valida e o ano nao e bissexto. \n");
	}

	
	return 0;
}
