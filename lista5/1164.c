#include<stdio.h>
int main(){
	int n, x[21], j[21], i, cont;

	scanf("%d", &n);

	for(i = 1; i <= n; i++){
		scanf("%d", &x[i]);
		j[i] = 0;

		for(cont = 1; cont <= x[i]; cont++){
			if(x[i] % cont != 0){
				j[i] = 1;
			}
		}
	}
	for(i = 0;  >= 0; i++){
		if(j[i] == 0){
			printf("%d eh perfeito\n", x[i]);
		} else {
			printf("%d nao eh perfeito\n", x[i]);
		}
	}
	return 0;
}