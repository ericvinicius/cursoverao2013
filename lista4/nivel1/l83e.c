#include<stdio.h>
int main(){
	int n, res, letra;

	printf("Digite um numero na base decimal: ");
	scanf("%d", &n);

	for( ; n >= 1; n /= 16){
		res = n % 16;
		if(res >= 10){
			switch(res){
				case 10:
					letra = 'A';
					printf("%c", letra);
					break;
				case 11:
					letra = 'B';
					printf("%c", letra);
					break;
				case 12:
					letra = 'C';
					printf("%c", letra);
					break;
				case 13:
					letra = 'D';
					printf("%c", letra);
					break;
				case 14:
					letra = 'E'; 
					printf("%c", letra);
					break;
				case 15:
					letra = 'F';
					printf("%c", letra);
					break;
			}
		} else {
			printf("%d", res);
		} 
	}

	printf("\n");

	return 0;
}