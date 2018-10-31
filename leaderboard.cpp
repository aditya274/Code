#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n]={0};
    int l=0, temp =0;
    cin>>a[0];
    for(int i=1;i<n;i++)
    {
        cin>>temp;
        if(temp!=a[l])
            a[++l] = temp;
   }
   for(int i=0;i<l;i++)
   {
   	cout<<a[i]<<'\n';
   }
    int m;
    cin>>m;
    int alice[m];
for(int i=0;i<m;i++)
{
    for(int j=l-1;j>0;j--)
    {
        if(alice[i]>a[j])
            cout<<j+1<<'\n';
    }
}
}

