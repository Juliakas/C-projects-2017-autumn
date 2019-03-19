#include <stdio.h>
#include <stdlib.h>
#include "Funkcijos.h"
int main(int argc, char* argv[])
{
	int N;							//Simboliu skaicius duomenu faile
	char *C;						//Kiekvienas issaugotas simbolis
	int flag;						//Jeigu flag == 1, tai ivyko klaida
	Skaitymas(&N, &C, argv[1], &flag);
	if(flag == 1) 
	{
		printf("Nerastas duomenu failas");
		return 0;
	}
	Pertvarkymas(&N, C);
	Rasymas(N, C, argv[2], &flag);
	if(flag == 1)
		{
		printf("Negalima sukurti rezultatu failo");
		return 0;
	}
	free(C);
	return 0;
}