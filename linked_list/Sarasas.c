#include <stdio.h>
#include "Rinkinys.h"
typedef struct Node List;
/*-----------------------------------------------------------------------------------------*/
int main()
{	
	List *head;													//Rodykle i saraso pradzia
	int value;
	int list_exists = 0;
	int x;
	do
	{	printf("\n1 - sukurti sarasa;\n2 - prideti elementa;\n3 - apversti sarasa;\n"
			"4 - spausdinti sarasa;\n5 - naikinti sarasa;\n0 - baigti darba\n\n");
		scanf("%d", &value);
		switch(value) 
		{	
			case 1 :
				if(list_exists == 0)
					list_exists = List_Create(&head);			//Saraso sukurimo funkcija
				else printf("Klaida: sarasas jau egzistuoja\n");
				break;
			case 2 :
				if(list_exists == 1)
				{	scanf("%d", &x);
					List_Add(&head, x);	}						//Elemento pridejimo funkcija
				else printf("Klaida: sarasas neegzistuoja\n");
				break;
			case 3 :
				if(list_exists == 1)
					List_Reverse(&head, head, NULL);			//Rekursine apvertimo funkcija
				else printf("Klaida: sarasas neegzistuoja\n");
				break;
			case 4 :
				if(list_exists == 1)
					List_Print(head);							//Spausdinimo funkcija
				else printf("Klaida: sarasas neegzistuoja\n");
				break;
			case 5 :
				if(list_exists == 1)
					list_exists = List_Remove(head);			//Rekursine saraso panaikinimo funkcija
				else printf("Klaida: sarasas neegzistuoja\n");
			case 0 :
				if(list_exists == 1)
					List_Remove(head);							//Istrinimas sarasas ir baigiame darba
				break;
			default :
			printf("Netinkama komanda. Iveskite skaiciu 0-5\n" );	}
	}	while(value != 0);
	return 0;																}
/*-----------------------------------------------------------------------------------------*/

/*-----------------------------------------------------------------------------------------*/

/*-----------------------------------------------------------------------------------------*/

/*-----------------------------------------------------------------------------------------*/

/*-----------------------------------------------------------------------------------------*/

/*-----------------------------------------------------------------------------------------*/