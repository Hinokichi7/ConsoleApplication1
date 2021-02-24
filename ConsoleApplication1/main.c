#include <stdio.h>
#include <string.h>
#include <stdlib.h>

main() {
	char file[64];
	unsigned int i;
	char baff[256];
	FILE *fp;
	errno_t error;
	int ch;

	printf("\n\n");
	printf("Dump File-name : ");
	scanf_s("%s", file, 60);
	printf("\n");
	printf("DUMP-FILE : %s\n\n", file);


	error = fopen_s(&fp, file, "r");

	if (error == 0) {
		//while ((ch = fgetc(fp)) != EOF) {
		//	putchar(ch);
		//}
		for (i = 0; i < 65535; ++i) {
			if ((fgets(baff, 255, fp)) != NULL) {
				printf("%5d : %s", i + 1, baff);
			}
			else
			{
				break;
			}
		}
	}
	else {
		printf("Cannot Open File : %s\n", file);
	}

	fclose(fp);
}