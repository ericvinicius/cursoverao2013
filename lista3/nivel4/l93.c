#include<stdio.h>
int polindromo(int x){
    int i = x;
    int inv = 0;
    
    while (i != 0) {
        inv = (inv * 10) + (i % 10);
        i /= 10;
    }
    if (inv == x) {
        return 1;
    } else {
        return 0;
    }
}


int main(){
    int n;
    
    printf("Digite um numero: ");
    scanf("%d", &n);
    
    while (n >= 0) {
        polindromo(n);
        
        if (polindromo(n) == 1) {
            break;
        } else {
            n--;
        }
        
    }
    
    printf("O polindromo mais proximo deste numero eh: %d \n", n);
    
    return 0;
}