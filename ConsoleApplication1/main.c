#include <stdio.h>
#include <string.h>

int inputed(char comment[]) {
	int val;
	printf("%s", comment);
	scanf_s("%d", &val);
	return(val);
}
main() {
	printf("\n Value = %d\n", inputed("Input value in decimal :"));
}