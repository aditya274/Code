#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,x,y;
		cin>>n>>m>>x>>y;
		if((x>=n||y>=m)&&(n==2&&m==2)) cout<<"Chefirnemo"<<endl;
		else if(((n-1)%x == 0 && (m-1)%y == 0)||((n-1)%x == 1 && (m-1)%y == 1)) cout<<"Chefirnemo"<<endl;
		else cout<<"Pofik"<<endl;
	}
}