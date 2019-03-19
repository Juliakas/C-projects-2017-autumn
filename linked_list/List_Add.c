#include <stdio.h>
#include <stdlib.h>
struct Node
{	int data;
	struct Node *next;	};
typedef struct Node List;
void List_Add(List **head, int x)
{	List *temp = *head, *prev;
	if(*head != NULL)
	{	while(temp != NULL)
		{	prev = temp;
			temp = temp -> next;	}
		temp = (List*)malloc(sizeof(List)); 
		prev -> next = temp;
		temp -> data = x;
		temp -> next = NULL;				}
	else 
	{	*head = (List*)malloc(sizeof(List));
		(*head) -> next = NULL;
		(*head) -> data = x;				}	}