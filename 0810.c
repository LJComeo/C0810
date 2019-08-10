#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp;
	char ch, filename[50];
	printf("please input filename:\n");
	scanf("%s", filename);
	if ((fp = fopen(filename, "w")) == NULL)
	{
		printf("cannot open file\n");
		exit(0);
	}
	ch = getchar();
	while (ch != '#')
	{
		fputc(ch, fp);
		ch = getchar();
	}
	fclose(fp);
	system("pause");
	return 0;
}