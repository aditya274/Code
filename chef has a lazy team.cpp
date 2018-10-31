#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,r,x;
		cin>>n>>r;
		int count =0;
		for(int i=0;i<n;i++)
		{
			cin>>x;
			if(x<=r) count++;
		}
		cout<<n<<" "<<count<<" "<<count<<endl;	
	}
}
