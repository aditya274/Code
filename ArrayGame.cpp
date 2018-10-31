#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int a[n],b[m],sum =0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		sum+=a[i];
	}
	for(int i=0;i<m;i++)
	{
		cin>>b[i];
		sum+=b[i];
	}
	int average = round(sum/(float)(n+m));
	//cout<<average;
	int count = 0;
	for(int i=0;i<n;i++)
	{
		if(a[i]<average) count+= average-a[i];
	}
	for(int i=0;i<m;i++)
	{
		if(b[i]>average) count+= b[i]-average;
	}
	cout<<count;
}
