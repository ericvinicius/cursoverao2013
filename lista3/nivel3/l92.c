#include<stdio.h>
int main(){
    int n, inv, i;
    inv = 0;
    
    printf("Digite um numero: ");
    scanf("%d", &n);
    
    i = n;
    
    while(i != 0){
        inv = (inv * 10) + (i % 10);
        i /= 10;
    }
    
    if(inv == n){
        printf(" %d eh polindromo. \n", n);
    } else {
        printf(" %d nao eh polindromo. \n", n);
    }

	return 0;
}
