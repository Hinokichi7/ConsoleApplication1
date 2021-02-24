#include <stdio.h>
#include <string.h>
#include <stdlib.h>

main() {
	char file0[64];
	char file1[64];
	unsigned int i;
	char buff[256];
	FILE* fp0;
	FILE* fp1;
	errno_t error0;
	errno_t erroe1;

	printf("Dump File-name : ");
	scanf_s("%s", file0, 63);
	printf("\n\n Dest Fime-name :");
	scanf_s("%s", file0, 63);

	error0 = fopen_s(&fp0, file0, "r");
	erroe1 = fopen_s(&fp1, file1, "w");
	//if (error0 != 0) {
	//	printf("\7\n Cannot Open File : %s\n\n", file0);
	//	exit(1);
	//}

	//if (erroe1 != 0) {
	//	printf("\7\n Cannot Open File : %s\n\n", file1);
	//	exit(1);
	//}

	

	if (error0 == 0 && erroe1 == 0) {
		for (i = 0; i < 1000; i++) {
			if (fgets(buff, 255, fp0) != NULL) {
				fprintf(fp1, "%3d: %s", i + 1, buff);
			}
			else
			{
				break;
			}
		}
		fclose(fp0);
		fclose(fp1);
	}
	else if (error0 != 0)
	{
		printf("\7\n Cannot Open File : %s\n\n", file0);
		exit(1);
		fclose(fp1);
	}
	else if (erroe1 != 0)
	{
		printf("\7\n Cannot Open File : %s\n\n", file1);
		exit(1);
		fclose(fp0);
	}
	else
	{
		printf("\7\n Cannot Open File : %s, %s", file0, file1);
		exit(1);
	}

}