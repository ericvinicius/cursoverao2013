#include<stdio.h>
#include<math.h>
int main(){
	int a, b, c, delta;
	float xmais, xmenos;

	scanf("%d %d %d", &a, &b, &c);

	delta = (b*b) - (4*(a*c));

	if(a == 0 || delta < 0){
		printf("Impossivel calcular\n");
		return 0;
	}

	xmais = ((b*(-1)) + sqrt(delta)) / (2 * a);

	xmenos = ((b*(-1)) - sqrt(delta)) / (2 * a);

	printf("R1 = %f\n", xmais);
	printf("R2 = %f\n", xmenos);

	return 0;
}