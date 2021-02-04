#include <stdio.h>
#include <string.h>

main() {
	char a[20];
	int b;

	scanf_s("%s", a, 20);
	scanf_s("%x", &b);

	printf("*** String is : %s ***\n", a);
	printf("*** Value is : %x ***\n", b);
}