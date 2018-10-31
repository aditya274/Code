#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            if(a[i] <= min) min = a[i];
        }
        int count =0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==min) count++;
        }
        if(count%2!=0) cout<<"Lucky"<<endl;
        else cout<<"Unlucky"<<endl;
        t--;
    }
    
}
