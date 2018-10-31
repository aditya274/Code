#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int i=0;
	for(int i=0;i<n-1;i++)
	{
		int m = pow(2,i)+pow(2,i-1);
			cout<<m<<"(1) "<<i<<" ";
		for(int j=i+1;j<n;j++)
		{
			m = m + pow(2,j) - pow(2,j-i+1);
			cout<<m<<"(2) ";
		}
		
	}
}
