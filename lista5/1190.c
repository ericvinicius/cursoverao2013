#include <stdio.h>

int main() {
	int j, i = 0;
	float m[12][12];
	int cont = 0;
	float resultado = 0;
	char letra;

	scanf("%c", &letra);

	for (i = 0; i < 12; i++) {
		for (j = 0; j < 12; j++) {
			scanf("%f", &m[i][j]);
			
			if((j + i) > 11 && letra == 'S' && j > 6 && j > i){
				resultado += m[i][j];
			} else if ((j + i) > 11 && letra == 'M' && j > 6 && j > i){
				resultado += m[i][j];
				cont++;
			}
		}
	}

	if(cont > 0){
		printf("%.1f\n", (resultado/cont));
	} else {
		printf("%.1f\n", resultado);
	}
	return 0;
}