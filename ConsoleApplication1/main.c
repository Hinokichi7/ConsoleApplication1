#include <stdio.h>
#include <string.h>

main() {
	int* a;
	int b;

	a = 100000000;
	b = *a;
	printf("%x", b);
}