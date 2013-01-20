#include<stdio.h>
int main(){
	int n, m;

	printf("Digite um numero: ");
	scanf("%d", &n);

	for( ; n != 0; ){
                m = n % 10;
		n /= 10;
		printf("%d", m);
                
        }

        printf("\n");

        return 0;
}

