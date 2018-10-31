#include<stdio.h>
int compare(int *n,int k)
{
	k--;
	if(k==0)
	return *n;
	
	if(*n>compare((n-1),k))
	return *n;
	
	else if(*n<compare((n-1),k))
	return compare((n-1),k);
	 
}
int main()
{
	int n,k,result=0;
	scanf("%d %d", &n, &k);
	int a[n], count=0;
	for(int i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
		count++;
		if(count>=k)
		{
			 result = compare(&a[i],k);
			 printf("%d ", result);
		}
	}
return 0;
}
