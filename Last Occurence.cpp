#include<stdio.h>
int main()
{
	int t;
	scanf("%d", &t);
	while(t)
	{
		int n;
		scanf("%d", &n);
		int a[n];
		for(int i=0;i<n;i++)
		{
			scanf("%d", &a[i]);
		}
		int q,k,flag=0;
		scanf("%d", &q);
		for(int i=0;i<q;i++)
		{
			scanf("%d", &k);
			for(int j=n-1;j>=0;j--)
			{
				if(a[j]==k)
				{
					printf("%d\n", j+1);
					flag = 1;
					break;
				}
			}
			if(flag==0)
			printf("-1\n");
		}
		
		t--;
	}
}
