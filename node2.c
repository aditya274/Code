#include<stdio.h>
#include<stdlib.h>

struct Node
	{
		int data;
		struct Node *next;
	};
void printList(struct Node *n)
	{
		while(n!=NULL)
		{
			printf(" %d ", n->data);
			n = n->next;
		}
	}
struct Node* reverse(struct Node *n)
{
	struct Node *prev = NULL, *current = n, *next;
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
int main()
{
	printf("Enter 5 numbers\n");
	struct Node *a1,*a2,*a3,*a4,*a5 = NULL;
	a1 = (struct Node*)malloc(sizeof(struct Node));
	a2 = (struct Node*)malloc(sizeof(struct Node));
	a3 = (struct Node*)malloc(sizeof(struct Node));
	a4 = (struct Node*)malloc(sizeof(struct Node));
	a5 = (struct Node*)malloc(sizeof(struct Node));
	scanf("%d %d %d %d %d",&a1->data, &a2->data, &a3->data, &a4->data, &a5->data);
	a1->next = a2;
	a2->next = a3;
	a3->next = a4;
	a4->next = a5;
	a5->next = NULL;

	printList(a1);
	printf("\n");
	a1 = reverse(a1);
	printf("\n");
	printList(a1);


}
