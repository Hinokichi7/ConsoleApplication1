#include <stdio.h>
#include <string.h>
#include <stdlib.h>

main() {
	char file[64];
	unsigned int i;
	char baff[256];
	FILE *fp = NULL;
	errno_t error;

	printf("\n\n");
	printf("Dump File-name : ");
	scanf_s("%s", file, 60);
	printf("\n");
	printf("DUMP-FILE : %s\n\n", file);

	
	if ((error = fopen_s(&fp, file, "r")) != 0) {
		printf(stderr, "\7\n Cannot Open File : %s\n\n", file);
			exit(1);
	}
	else
	{
		fp = error;
		for (i = 0; i < 65535; ++i) {
			if ((fgets(baff, 255, fp)) != 0) {
				break;
			}
			printf("%5d : %s", i+1, baff);
		}
	}

	fclose(fp);
}