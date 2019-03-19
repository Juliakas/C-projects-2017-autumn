#include <stdio.h>

void Pertvarkymas(int *N, char *C)
{
	int i, j;
	for(i = 0; i < *N; i++)
		if((C[i] == ' ') && (C[i - 1] == C[i + 1]))
			{
				(*N)--;
				for(j = i; j < *N; j++)
					C[j] = C[j + 1];
			}
}