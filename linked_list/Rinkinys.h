#ifndef Rinkinukas
#define Rinkinukas
	struct Node
	{	int data;
		struct Node *next;	};
	typedef struct Node List;
	int List_Create(List **head);
	void List_Add(List **head, int x);
	void List_Reverse(List **newHead, List *temp, List *prev);
	void List_Print(List *temp);
	int List_Remove(List *temp);
#endif