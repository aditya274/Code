#include<iostream>
int count=0;
void pikachu(int s, int t)
{
	if(s<t)
	{
		if(t-s>=13)
		{
			count++;
			s = s+13;
			pikachu(s,t);
		}
		else if(t-s<13)
		{
			count+=(t-s);
		}
	}
	else if(s>t)
		{
			if(26-s+t)>13
			count++;
			s = (s+13)%26;
			pikachu(s,t);	
		}
}

using namespace std;

int main()
{
	int n,s,t;
	cin>>n;
	char s[n],t[n];
	cin>>s>>t;
	
	for(int i=0;i<n;i++)
	{
		s = s[i]-64;
		t = t[i]-64;
		pikachu(s,t);
	}
	cout<<count;
}
