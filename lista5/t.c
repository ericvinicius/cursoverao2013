#include <string.h>
#include <stdio.h>

int cmp(char a, char b) {
	if (a == b) {
		return 0;
	}

	printf("a=%c b=%c\n", a, b);

	if (a < b) {
		if (a + 32 == b) {
			return 0;
		} else {
			return -1;
		}
	} else {
		if (b + 32 == a) {
			return 0;
		} else {
			return 1;
		}
	}
}

int main() {

	//printf("\n%d\n", strcasecmp("A", "a"));
	//printf("\n%d\n", strcasecmp('A', 'a'));

	//char *a = "a";
	//char *A = "A";

	//printf("\n%d\n", strcasecmp(a, A));

	char i[1];
	char j[1];

	i[0] = 'x'; 
	j[0] = 'X'; 

	printf("\n>%d\n", cmp(i[0], j[0]));

	char *p = i;
	char *P = j;

	printf("\n%d\n", strcasecmp(p, P));

	return 0;
}