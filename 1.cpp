#include<stdio.h>
int top = -1,stack[100];
void displaytop()
{
	if(top==-1)
	printf("No Food\n");
	else
	{
		printf("%d\n", stack[top]);
		top=top-1;
	}
}
void push(int cost)
{
	top=top+1;
	stack[top]=cost;
}
int main()
{
    int n,q,val;
	scanf("%d", &n);
	for(int i=0;i<n;i++)
	{
	    int q, val;
		scanf("%d %d", &q, &val);
		if(q==1)
		{
			displaytop();
		}
		else if(q==2)
		{
			push(val);
		}	
		fflush(stdin);
	}
return 0;
}

