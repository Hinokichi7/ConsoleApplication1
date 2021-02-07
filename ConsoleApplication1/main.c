#include <stdio.h>
#include <string.h>

static char number[21] = "12345678901234567890";
main() {
	int i;
	i = 0;
	while (i < 20)
	{
		printf("%c\n", number[i]);
		i++;
	}
}