#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	char x[n][m];
	for(int i=0;i<n;i++)
	{
		cin>>x[i][0];
		if(x[i][0] == x[i-1][0]){
			cout<<"NO";
			exit(0);
		}
		for(int j=1;j<m;j++)
		{
			cin>>x[i][j];
			if(x[i][j] != x[i][j-1])
			{
				cout<<"NO";
				exit(0);
			}
		}
	}
	cout<<"YES";
}