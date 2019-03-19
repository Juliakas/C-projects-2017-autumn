#include <stdio.h>
struct Node
{	int data;
	struct Node *next;	};
typedef struct Node List;
void List_Print(List *temp)
{	while(temp != NULL) 
	{ 	printf("%d ", temp -> data); 
		temp = temp -> next; 		}
	printf("\n");						}