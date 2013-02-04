#include<stdio.h>
#include<stdlib.h>
int minuscula(char c){
	return (c >= 'a' && c <= 'z');
}

int maiuscula(char c){
	return (c >= 'A' && c <= 'Z');
}

int letra(char c){
	if(maiuscula(c)){
		return 'M';
	} else if(maiuscula(c)) {
		return 'm';
	}
	return 0;
}

int numero(char c){
	return (c >= '0' && c <= '9');
}

int main(){
	int c1[100000], c2[100000], c3[100000];
	int max, res, j, i;

	scanf("%d", &max);

	for(i = 0; i <= max; i++){
		printf("i1 = %d\n", i);

		/*c1[i] = getchar();
		c1[i] = getchar();*/		

		while(numero(c1[i])){
			c1[i] = getchar();
		}
		printf("i1.1 = %d\n", i);

		/*c1[i] = getchar();
		c1[i] = getchar();*/

		while(letra(c2[i])){
			c2[i] = getc(stdin);
		}
		printf("i1.2 = %d\n", i);

		/*c1[i] = getchar();
		c1[i] = getchar();*/

		while(numero(c3[i])){
			c3[i] = getc(stdin);
		}
		printf("i2 =%d\n", i);

	}

	printf("i3 = %d\n", i);

	for(j = 0; j <= i; j++){
		printf("j1 = %d\n", j);

		if(c1[j] == c3[j]){
			res = c1[j] * c3[j];

		} else if(c2[j] == 'M'){
			res = (c1[j] + c3[j]);

		} else if(c2[j] == 'm'){
			res = (c1[j] - c3[j]);
		}
		printf("j2 = %d\n", j);


		printf("%d\n", res);
	}


	return 0;
}