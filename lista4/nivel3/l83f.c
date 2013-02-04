#include<stdio.h>
char verificaLetra(res){
	char letra;
	switch (res){
		case 10:
			letra = 'A';
			break;
		case 11:
			letra = 'B';
			break;
		case 12:
			letra = 'C';
			break;
		case 13:
			letra = 'D';
			break;
		case 14:
			letra = 'E'; 
			break;
		case 15:
			letra = 'F';
			break;
	}
	return letra;
}
int main(){
	int n, i, ultimo, res, letraOuNumero[1000];
	int guardaDigitos[1000];
	char guardaLetras[1000];

	printf("Digite um numero na base decimal: ");
	scanf("%d", &n);

	for(i = 0; n >= 1; n /= 16){
		res = n % 16;
		if(res >= 10){
			guardaLetras[i] = verificaLetra(res);
			letraOuNumero[i] = 0;
		} else {
			guardaDigitos[i] = res;
			letraOuNumero[i] = 1;
		}
		i++;
	}
	guardaLetras[i] = '\0';
	for(ultimo = i; ultimo >= 0; ultimo--){
		if(letraOuNumero[ultimo] == 0){
			printf("%c", guardaLetras[ultimo]);
		} else {
			printf("%d", guardaDigitos[ultimo]);
		}
	}
	printf("\n");
	return 0;
}