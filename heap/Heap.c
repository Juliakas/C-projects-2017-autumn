#include <stdio.h>
#include <stdlib.h>

void Skaitymas(int *N, int **A)
{
    int i;
	scanf("%d", N);                         //Define the count of numbers
	*A = (int*)malloc(*N * sizeof(int));
	for(i = 0; i < *N; i++)
        scanf("%d", *A + i);	            //Read N numbers
}
//////////////////////////////////////////////////////////////////////////
void Skaiciavimai(int N, int *A, int **Q, int *pirm, int *antr)
{
///////////////BUBBLE SORT
	int flag = 0;			//flag indicates if the array is sorted
	int i;
	int temp;
	*Q = (int*)malloc(N * sizeof(int));
	for(i = 0; i < N; i++)
		(*Q)[i] = A[i];
	while(flag == 0)
	{
		flag = 1;
		for(i = 0; i < N - 1; i++)
			if((*Q)[i] > (*Q)[i + 1])
			{
				temp = (*Q)[i];
				(*Q)[i] = (*Q)[i + 1];
				(*Q)[i + 1] = temp;
				flag = 0;
			}
	}
	int MIN = (*Q)[0], MAX = (*Q)[N - 1];
//////////////CALCULATING RESULTS
    i = 0;
	int tMAX = MIN + (MAX - MIN) / 3;	//Minimal value of the first interval
	for(; (*Q)[i] < tMAX && i < N; i++)
		*pirm = i;
	tMAX = MIN + (MAX - MIN) * 2 / 3;
	for(; (*Q)[i] < tMAX && i < N; i++)
		*antr = i;
}
void Rasymas(int N, int *Q, int pirm, int antr)
{
	int i = 0;
	printf("1) ");
	for(; i <= pirm; i++)
		printf("%d ", Q[i]);
	printf("\n2) ");
	for(; i <= antr; i++)
		printf("%d ", Q[i]);
	printf("\n3) ");
	for(; i < N; i++)
		printf("%d ", Q[i]);
}
////////////////////////////////////////////////////////////////////////////
int main()
{
	int N;							//Predefined array length
	int *A;							//Pointer to the beggining of array
	int *Q;							//Copy of A which we modify
	int MIN, MAX;           		//MIN and MAX values of array
	int pirm, antr;					//Indexes of intervals' last elements
	Skaitymas(&N, &A);
	Skaiciavimai(N, A, &Q, &pirm, &antr);
	Rasymas(N, Q, pirm, antr);
	free(Q);
	free(A);
	return 0;
}
/*	9. Įvesti sveiką skaičių N. Įvesti N sveikų skaičių.
Apskaičiuoti įvestų skaičių minimumą MIN ir maksimumą MAX.
Išvesti įvestus skaičius trimis grupėmis, kurių kiekviena priklauso atitinkamam intervalui:
1)  [MIN ,	MIN+(MAX-MIN)/3	)
2)  [MIN+(MAX-MIN)/3 ,	MIN+(MAX-MIN)*2/3	)
3)  [MIN+(MAX-MIN)*2/3 ,	MAX	]
_______________________________________________________________________________________________________
Input a number N. Input N consecutive numbers
Calculate the inputted number set minimum MIN and maximum MAX.
Print out these numbers in three groups that belong to these intervals accordingly:
1)  [MIN ,	MIN+(MAX-MIN)/3	)
2)  [MIN+(MAX-MIN)/3 ,	MIN+(MAX-MIN)*2/3	)
3)  [MIN+(MAX-MIN)*2/3 ,	MAX	]
*/