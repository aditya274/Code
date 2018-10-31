#include<stdio.h>
struct node {
	int data;
	struct node *n;
};

struct Node* head;

void newnode(int n)
{
	Node* temp = malloc(sizeof(struct Node));
	temp->data = x;
	temp->next head;
	head = temp;
}

void printList()
{
	struct Node* temp = head;
	while(temp!=NULL)
	{
		printf("%d", temp->data);
		temp=temp->next

	}
	printf("\n");
}
int main()
{
	int n,x;
	scanf("%d", &n);
	for(int i=0;i,n;i++)
	{
		scanf("%d", &x);
		newnode(x);
		printList();			
	}
	
	printList(a[0]);
	
}