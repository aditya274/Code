#include<stdio.h>
int main()
{
	int n,k;
	scanf("%d %d", &n, &k);
	int q[k];
	int z;
	for(int i=0;i<n;i++)
	{
		z = i%k;
		scanf("%d", &a[z]);
		if(a[z]>max)
		max = a[z];
		
		if(count=k)
		{
			printf("%d ", max);
			
		}
		if(count>k)
		{
			if(a[i]>=max)
			max = a[i];
			printf("%d ", max);
		}
	}
}
