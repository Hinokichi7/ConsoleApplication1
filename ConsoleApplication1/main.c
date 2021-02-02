#include <stdio.h>
#include <string.h>

main() {
	char s[5] = { 'A', 'B', 'C', 'D', 0};
	char s2[10];
	strcpy_s(s2, 5, s);

	printf("%s\n", s2);

	int a;
	a = 16161;

	printf("Number is %x in hexadecimal.\n", a);
	printf("Number is %d in decimal.\n", a);
	printf("Number is %o in octal.\n", a);
}