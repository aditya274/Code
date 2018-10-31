#include<stdio.h>
#include<string.h>
int main()
{
	int t;
	scanf("%d", &t);
	while(t)
	{
		int n,count1=0, count2=0;
		char s[20],s1[20],s2[20],win[20];
		scanf("%d", &n);
		for(int i=0;i<n;i++)
		{
			gets(s);
			if(i==0){
			strcpy(s,s1);
			puts(s1);
			}
			if(i==1)
			{
			strcpy(s,s2);
			puts(s2);
			}
			if(i>1)
			{
				if(s == s1)
				count1++;
				if(s == s2)
				count2++;
			}
		}
		if(count1>count2)
		printf("%s\n", s1);
		else if(count2>count1)
		printf("%s\n", s2);
		else
		printf("Draw"); 
		t--;
	}
} 
