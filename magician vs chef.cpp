#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,x,s;
		cin>>n>>x>>s;
		int arr[n];
		for(int i=0;i<s;i++)
		{
			int a,b;
			cin>>a>>b;
			if(a == x) x = b;
			else if(b == x) x = a;			
		}
	cout<<x;
	}
}