#include <stdio.h>
#include <string.h>

main() {
	static char a[25];
	int b;

	scanf_s("%s", a, 25);
	scanf_s("%x", &b, 10);

	printf(" String is : %s\n", a);
	printf("Value is :%x\n", b);
}