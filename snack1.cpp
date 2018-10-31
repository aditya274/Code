#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b;
		cin>>a>>b;
		int x[a];
		for(int i=0;i<a;i++)
		{
			cin>>x[i];
		}
		int count = 0;
		sort(x, x+a);
		for(int i=a-1;i>=0;i--){
			if (x[i] >= x[a-b]) count++; 
		}
	cout<<count<<endl;
	}
}
