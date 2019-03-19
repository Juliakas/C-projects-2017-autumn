#include <stdio.h>

void Rasymas(int N, char *C, char argv[], int *flag)
{
	FILE *fp;
	int i, j;
	*flag = 0;
	fp = fopen(argv, "w");
	if(fp == 0)
	{
		*flag = 1;
		return;
	}
	for(i = 0; i < N; i++)
		if(C[i] != EOF) fputc(C[i], fp);
	fclose(fp);
}