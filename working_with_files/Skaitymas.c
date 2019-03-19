#include <stdio.h>
#include <stdlib.h>
void Skaitymas(int *N, char **C, char argv[], int *flag)
{
	int i;
	*flag = 0;
	FILE *fp;
	fp = fopen(argv, "r");
	if(fp == 0) 
	{
		*flag = 1;
		return;
	}
	fseek(fp, 0, SEEK_END);
	*N = ftell(fp);
	*C = (char*)malloc(*N * sizeof(char));
	rewind(fp);
	for(i = 0; i < *N; i++)
		(*C)[i] = fgetc(fp);
	fclose(fp);
}