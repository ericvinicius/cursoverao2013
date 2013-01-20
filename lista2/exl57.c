#include<stdio.h>
int main(){
	char c;
	int v;

	printf("Digite uma letra entre a e z: ");
	scanf("%c", &c);

	v = c;	
	v -= 32;

	printf("O valor da letra maiuscula, relacionada com sua letra minuscula eh: %d \n", v);
	printf("A letra maiuscula, realcionada a sua letra eh: %c \n",(char)v);
	
	return 0;
}
