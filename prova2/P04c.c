#include<stdio.h>
int main(){
	int termo, i = 0, res = 0;

	while(termo != 0){
		printf("Digite a sequencia: ");
		scanf("%d", &termo); 

		if (i % 2 == 0) {
			res += termo;
		} else {
			res = res - termo;
		}		
		i++;
    }	

	printf ("O resultado eh %03d .\n", res);

	return 0;
}