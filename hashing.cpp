#include<stdio.h>
struct pair 
{
	int value;
	int key;
};
void display(struct pair ar[], int size)
{
	int i;
	printf("Value\tKey\n");

	for(i=0;i<size;i++)
	{
		printf("%d\t%d\n",ar[i].value,ar[i].key);
	}
}
int main()
{
	int size,i,temp;
	scanf("%d", &size);
	struct pair hash[size];
	for(int i=0;i<size;i++)
	{
		scanf("%d", &temp);
		hash[temp%size].value = temp;
		hash[temp%size].key = temp%size;
	}
	printf("\n");
	display(hash,size);
}
