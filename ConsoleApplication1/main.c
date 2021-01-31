#include <stdio.h>

main() {
	long			a;
	unsigned int	b;
	char			c;

	a = -120000;
	b = 0x3FFF;
	c = 015;

	printf("value a is %ld \n", a);
	printf("value b is %x \n", b);
	printf("value c is %o \n", c);
}