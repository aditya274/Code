#include<stdio.h>
int top=-1;
int stack[5000]={0};
void pop()
{
	if(top!=-1)
	top=top-1;
}
int main()
{
	int n;
    scanf("%d", n);
    int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
		if(a[i]==0)
		pop();
		else if(a[i]>0)
		top++;
		stack[top]=a[i];
	}
	int sum=0;
	for(int i=0;i<5000;i++)
	{
		sum+=stack[i];
	}
	
	printf("%d", sum);
}


