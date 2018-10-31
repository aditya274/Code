#include<stdio.h>
#include<stdlib.h>
struct Node
	{
		int data;
		struct Node *next;
	};
//reverse a linked list//
struct Node* reverse(struct Node* n)
	{
		struct Node *current = n;
		struct Node *prev = NULL;
		struct Node *next;

		while(current!=NULL)
		{
			next = current->next;
			current->next = prev;
			prev = current;
			current = next;
		}
		n = prev;
		return n;
	}

//print
void printList(struct Node *n)
	{
		while(n!=NULL)
		{
			printf(" %d ", n->data);
			n = n->next;
		}
	}
//print reverse
void printReverse(struct Node *n)
	{
		if(n==NULL)
			return;
		printReverse(n->next);
		printf(" %d ", n->data);
	}

int main()
{
	//creating 3 nodes
	struct Node* head = NULL;
	struct Node* second = NULL;
	struct Node* third = NULL;

	//allocating memory to nodes
	head = (struct Node*)malloc(sizeof(struct Node));
	second = (struct Node*)malloc(sizeof(struct Node));
	third = (struct Node*)malloc(sizeof(struct Node));

	head->data = 1;	//assign data in first node.
	head->next = second;	//link first node to second.

	second->data = 2;
	second->next = third;

	third->data = 3;
	third->next =NULL;

	printList(head);
	printf("\n");
	printReverse(head);
	printf("\n");
	printList(head);
	printf("\n");
	head = reverse(head);
	printList(head);
	printf("\n");
	return 0;
}

