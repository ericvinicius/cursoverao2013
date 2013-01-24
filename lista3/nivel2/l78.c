#include<stdio.h>
int main(){
    int n, min, max, i, cont, mod;
    
    printf("Qual digito deseja contar: ");
    scanf("%d", &n);
    
    printf("Digite o intervalo a ser considerado: ");
    scanf("%d %d", &min, &max);
    
    for( ; max >= min; max--){
        cont = max;
        while(cont >= 0){
            mod = cont % 10;
            if(mod == n){
                i++;
            }
            if(cont == 0){
                break;
            }
            cont /= 10;
        }
    }
    
    printf("O digito %d aparece %d vezes no intervalo. \n", n, i);

	return 0;
}
