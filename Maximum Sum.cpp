#include "bits/stdc++.h" 
using namespace std ;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int positive_count =0, negative_min =-1000000000, positive_sum = -1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=0)
        {
            positive_count++;
            positive_sum+= arr[i];
        }
        else
        {
            if(arr[i]>negative_min) negative_min = arr[i];
        }
    }
if(positive_count <0)
cout<<negative_min<<" 1"<<endl;

else cout<<positive_sum+1<<" "<<positive_count<<endl;
}
