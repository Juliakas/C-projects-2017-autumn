#include <stdio.h>
struct Node
{	int data;
	struct Node *next;	};
typedef struct Node List;
void List_Reverse(List **newHead, List *temp, List *prev)	
{	if(temp == NULL) return;
	else
	{	*newHead = temp;
		List_Reverse(newHead, temp -> next, temp);	}
		temp -> next = prev;							}