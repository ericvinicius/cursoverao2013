#include <stdio.h>

int main() {
	int j, i, coluna;
	float m[12][12];
	float resultado = 0.0; 
	float cont = 0.0;
	char letra;

	scanf("%d %c", &coluna, &letra);

	for (i = 0; i < 12; i++) {
		for (j = 0; j < 12; j++) {
			scanf("%f", &m[i][j]);
			
			if(j == coluna && letra == 'S'){
				resultado += m[i][j]; 
	
			} else if(j == coluna && letra == 'M'){
				resultado += m[i][j];
				cont++;
			}
		}
	}

	if(cont > 0){
		resultado /= cont;
		printf("%.1f\n", resultado);
	} else {
		printf("%.1f\n", resultado);
	}
	return 0;
}