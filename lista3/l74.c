#include<stdio.h>
int main(){
	int n, a, b, c;

	printf("Digite os lados do triangulo: ");
	scanf("%d %d %d", &a, &b, &c);

	n = b - c;

	if(b - c < 0){
		n *= -1;
	}

	if((a == b && b != c) || (b == c && c != a) || (c == a && a != b)){
		printf("triangulo isosceles. \n");
	} else if ( a == b && b == c){
		printf("triangulo equilatero. \n");
	} else if(! ((n < a) && (a < (b + c))) ){
		printf("O triangulo nao existe.\n");
	} else {
		printf("triangulo escaleno. \n");
	}

	return 0;
}
