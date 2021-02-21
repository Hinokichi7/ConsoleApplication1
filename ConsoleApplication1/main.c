#include <stdio.h>
#include <string.h>
#include <stdlib.h>

main() {
	char file[64];
	unsigned int i;
	char baff[256];
	FILE *fp;

	printf("\n\n");
	printf("Dump File-name : ");
	scanf_s("%s", file, 60);
	printf("\n");
	printf("DUMP-FILE : %s\n\n", file);

	fp = NULL;
	if (0 != (fp = fopen_s(&fp, file, "r"))) {
		printf(stderr, "\7\n Cannot Open File : %s\n\n", file);
			exit(1);
	}
	else
	{
		for (i = 0; i < 65535; ++i) {
			if (0 !=  fgets(baff, 255, fp)) {
				break;
			}
			printf("%5d : %s", i+1, baff);
		}
	}

	fclose(fp);
}