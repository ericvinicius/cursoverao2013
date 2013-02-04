#include<stdio.h>
void multiplicacao(){
	int i, j;

	for(i = 1; (i+2) <= 9; i += 3){
		for(j = 1; j <= 10; j++){
			printf("%d * %d = %d \t %d * %d = %d \t %d * %d = %d \n", i, j, (i*j), i+1, j, ((i+1) * j), i+2, j, ((i+2) * j) );
		}
		printf("\n");
	}


}
void subtracao(){
	int i, j;

	for(i = 1; (i+2) <= 9; i += 3){
		for(j = 1; j <= 10; j++){
			printf("%d - %d = %d \t %d - %d = %d \t %d - %d = %d \n", i, j, (i-j), i+1, j, ((i+1) - j), i+2, j, ((i+2) - j) );
		}
		printf("\n");
	}
}

void soma(){
	int i, j;

	for(i = 1; (i+2) <= 9; i += 3){
		for(j = 1; j <= 10; j++){
			printf("%d + %d = %d \t %d + %d = %d \t %d + %d = %d \n", i, j, (i+j), i+1, j, ((i+1) + j), i+2, j, ((i+2) + j) );
		}
		printf("\n");
	}
}
int main(){
	char c;

	printf("Digite a operacao (+,-,*): ");
	scanf("%c", &c);

	switch(c){
		case '+':
			soma();
			break;
		case '-':
			subtracao();
			break;
		case '*':
			multiplicacao();
			break;
	}






	return 0;
}