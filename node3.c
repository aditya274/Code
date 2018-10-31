#include<stdio.h>
#include<stdlib.h>

struct Node 
{
	int data;
	struct Node *next;
};

int main()
{
	int n;
	printf("Enter the number of elements:");
	scanf("%d", &n);
	struct Node a[n];
	printf("Enter data");
	
	for(int i=0;i<n;i++)
	{
		scanf("%d", &a[i].data);
	}

	for(int i=0;i<n;i++)
	{
		printf("%d", a[i].data);
	}
	
	return 0;
}
