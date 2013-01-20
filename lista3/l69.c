#include<stdio.h>
int main(){
        int n, m = 0;

        printf("Digite um numero: ");
        scanf("%d", &n);

        for( ; n != 0; ){
                m += n % 10;
		n /= 10; 
        }

        printf("A soma dos digitos eh %d. \n", m);

        return 0;
}
