#include<stdio.h>
int main(){
	int n, termo, i, res = 0;

	printf("Quantos numeros tem a sequencia? "); 
	scanf("%d", &n);
    
	printf("Digite a sequencia: ");

	for (i = 0; i < n; i++) { 
		scanf("%d", &termo); 
		if (i % 2 == 0) {
			res += termo;
		} else {
			res = res - termo;
		}		
    }

	printf ("O resultado eh %03d .\n", res);

	return 0;
}