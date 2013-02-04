#include <stdio.h>
int main(){
    int n, primo, base, elevado, aux, divisor;

    printf("Digite um numero: ");
    scanf("%d", &n);

	base = 2;
	aux = n;

	printf("A decomposição de %d eh ", n);

    while (aux >= 2) {
        elevado = 0;

        while (aux % base == 0) {
            elevado++;
           	aux /= base;
        }

        if (elevado >= 1){
        	if (aux >= 3){
            	printf("(%d ˆ %d) * ", base, elevado);
            } else {
            	printf("(%d ˆ %d)", base, elevado);
            }
        }

        primo = 0;
        while (!primo) {
            base++;
            primo = 1;
            divisor = 2;

            while (divisor <= (base / 2) && primo) {
                if (base % divisor == 0){
                        primo = 0;
                } else {
                        divisor++;
               	}
        	}
        }	
    }
    printf("\n");
    return 0;
}