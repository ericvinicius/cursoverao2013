#include<stdio.h>
int main(){
    
	int n, m, i, j, cont;
	cont = 0;
    
	printf("Digite dois numeros: ");
	scanf("%d %d", &n, &m);
    
    
	if(m < n){
		i = n;
		n = m;
		m = i;
	}
    
	for( ; n <= m; n++){
		j = 0;
        
		for (i = 2; i*i <= n; i++){
			if(n % i == 0){
				j++;
			}
		}
        
		if(j == 0){
			if( n != 0 && n != 1){
				printf("%d ", n);
				cont++;
			}
		}
	}
    
	if(cont == 0){
		printf("Neste intervalo, nao ha numeros primos!");
	}
    
	printf("\n");
    
	return 0;
}