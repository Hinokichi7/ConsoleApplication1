#include <stdio.h>
#include <string.h>


void mul10(int *a) {
	*a *= 10;
}
main() {
	int a;
	printf("Number =  : ");
	scanf_s("%d", &a);

	mul10(&a);

	printf("Number * 10 = : %d\n", a);
}