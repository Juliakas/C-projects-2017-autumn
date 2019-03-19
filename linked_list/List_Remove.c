#include <stdio.h>
#include <stdlib.h>
struct Node
{	int data;
	struct Node *next;	};
typedef struct Node List;
int List_Remove(List *temp)
{	if(temp == NULL)	return 0;
	else	List_Remove(temp -> next);
	free(temp);							
	return 0;							}