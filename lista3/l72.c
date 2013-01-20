#include<stdio.h>
int main(){
	int n;

	for(n = 999999; n > 99999; n--){ 	
		if(n % 2 != 0 && n % 3 != 0 && n % 5 != 0 && n % 7 != 0 && n % 11 != 0){
			printf("%d ", n);
		}
	}
	return 0;
}
