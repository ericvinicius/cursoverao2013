#include<stdio.h>

int main(){
	int n[1000], t, t2, i;

	scanf("%d", &t);

	for(i = 0; i <= 999; ){
		for(t2 = 0; t2 <= t-1; t2++){
			n[i] = t2;
			printf("N[%d] = %d\n", i, n[i]);
			if(i >= 1000){
				break;
			}
			i++;
		}
	}
	return 0;
}