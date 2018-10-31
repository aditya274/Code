#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int hash[1000001]={0};
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        hash[a]++;
    }
    for(int i=1;i<n/2;i++) {
        if(hash[i]&&hash[n-i]) {
            cout<<"YES";
        }
    }
    cout<<"NO";
    	
}
