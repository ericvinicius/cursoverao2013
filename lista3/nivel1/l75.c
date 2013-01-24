#include<stdio.h>
int main(){
	float n1, n2;
	int i, q1, q2, qn, q3, q4;

	i = 1;

	for( ;1; ){

		printf("Digite o ponto %d (ou 0 0 para terminar): \n", i);
		scanf("%f %f", &n1, &n2);
					
		if(n1 == 0 || n2 == 0){
			if ((n1 == 0) && (n2 == 0)) {
				break;
			} 
			qn++;
		}

		i++;

		if(n1 > 0 && n2 > 0){
			q1++;
		} else if (n1 > 0 && n2 < 0){
			q4++;
		} else if(n1 < 0 && n2 < 0){
			q3++;
		} else if(n1 < 0 && n2 > 0) {
			q2++;
		}
		
	}  
	if(q1 > 0){
		printf("No primeiro quadrante temos %d ponto(s). \n", q1);
	}if(q2 > 0){
		printf("No segundo quadrante temos %d ponto(s). \n", q2);
	}if(q3 > 0){
		printf("No terceiro quadrante temos %d ponto(s). \n", q3);
	} if(q4 > 0){
		printf("No quarto quadrante temos %d ponto(s). \n", q4);
	} if(qn > 0){
		printf("%d nao estao em nenhum quadrante. \n", qn);
	}

	return 0;
}
