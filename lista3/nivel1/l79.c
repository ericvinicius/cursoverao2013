#include<stdio.h>
double fat(double x){
    int i;
    for(i = x - 1; i > 1; i--){
        x *= i;
    }
    return x;
}

int main(){
    double n, p, sub;
    double mult;
    double total;
	
	printf("Digite n e p, sendo n >= p: ");
	scanf("%lf %lf", &n, &p);
    
    sub = n - p;

	n = fat(n);
	p = fat(p);
	sub = fat(sub);
    
	mult = p * sub;
	total = n / mult;

	printf("O total eh: %f. \n", total);

	return 0;
}
