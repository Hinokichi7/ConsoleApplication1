#include <stdio.h>
#include <string.h>

main() {
	static char a[11] = "C Lmanguage";
	printg(a);
}
printg(char a[]){
	printf("\n%s\n", a);
}