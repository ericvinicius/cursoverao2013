#include<stdio.h>
int main(){
	int a, b, cont[11], res, a2;

	scanf("%d %d", &a, &b);
	a2 = a;

	while(a != 0 && b != 0){
		cont[0] = 0;
		cont[1] = 0;
		cont[2] = 0;
		cont[3] = 0;
		cont[4] = 0;
		cont[5] = 0;
		cont[6] = 0;
		cont[7] = 0;
		cont[8] = 0;
		cont[9] = 0;

		for( ; a <= b; a++){
			a2 = a;

			while(a2 > 0){

				res = a2 % 10;
				a2 /= 10;

				switch (res){
					case 0:
						cont[0]++;
						break;
					case 1:
						cont[1]++;
						break;
					case 2:
						cont[2]++;
						break;
					case 3:
						cont[3]++;
						break;
					case 4:
						cont[4]++;
						break;
					case 5:
						cont[5]++;
						break;
					case 6:
						cont[6]++;
						break;
					case 7:
						cont[7]++;
						break;
					case 8:
						cont[8]++;
						break;
					case 9:
						cont[9]++;
						break;
				}
			}	
		}
		printf("%d %d %d %d %d %d %d %d %d %d\n", cont[0], cont[1], cont[2], cont[3], cont[4], cont[5], cont[6], cont[7], cont[8], cont[9]);

		scanf("%d %d", &a, &b);
		a2 = a;
	}	
	return 0;
}