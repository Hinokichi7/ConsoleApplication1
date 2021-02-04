#include <stdio.h>
#include <string.h>

main() {
	int a, b;

	scanf_s("%d", &a);
	scanf_s("%d", &b);

	if (a == b) {
		printf("\n First == Second \n");
	}
	else
	{
		printf("\n First != Second \n");
	}
}