#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int order[n],ideal[n];
    for(int i=0;i<n;i++)
    {
        cin>>order[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>ideal[i];
    }
    int i =0,temp, result =0;
    while(i<=n-1)
    {
        if(order[i] == ideal[i])
        {
            result++;
            i++;
        }
        
        else
        {
            temp = order[i];
            for(int j =i+1;j<n;j++)
            {
                order[j-1] = order[j];
            }
            order[n-1] = temp;
            result++;
        }
    }
    cout<<result;
}
