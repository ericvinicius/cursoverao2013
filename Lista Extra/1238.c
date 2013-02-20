#include<stdio.h>
void leString(){
	char str[70], str2[70];
	int i, j;

	scanf("%c", &str[0]);

	for(i = 1; str[i] != ' '; ){
		i++;
		scanf("%c", &str[i]);
	}

	scanf("%c", &str2[0]);

	for(i = 1; str2[i] != '\n'; ){
		i++;
		scanf("%c", &str2[i]);
	}

	for(i = -1; 1; ){
		if(str[i] == '\n' || str2[i] == '\n'){
			break;
		}
		i++;
		if(i == 1){
			i++;
		}

		j = i;

		if(str[i] == ' '){
			i++;
		} else if(str2[i] == ' '){
			j++;
		}

		printf("%c", str[i]);
		printf("%c", str2[j]);
	}

	printf("\n");
}


int main(){
	int n, i;

	scanf("%d ", &n);

	for(i = 1; i <= n; i++){
		leString();
	}
	return 0;
}