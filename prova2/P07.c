#include<stdio.h>
int main(){
	char rg;
	double me, res;

	printf("Digite o valor que queira converter, e depois coloque um espaco e a letra de qual medida(r para radianos, e g para graus: \n");
	scanf("%lf %c", &me, &rg);

	if(rg == 'r'){

		res = 565.2 * me;
		printf("O resultado da conversao eh: %f .\n", res);

	} else if (rg == 'g'){

		res = (me * 3.14) / 180;
		printf("O resultado da conversao eh: %f .\n", res);

	}

	return 0;

}