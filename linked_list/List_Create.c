#include <stdio.h>
struct Node
{	int data;
	struct Node *next;	};
typedef struct Node List;
int List_Create(List **head)
{	*head = NULL;
	return 1;		}