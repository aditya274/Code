#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a =*b;
    *b = temp;    
}

int main() {
    int n,x;
    cin>>n>>x;
    int arr[3]={0};
    arr[x] = 1;
    for(int i=x;i>0;i--)
    {
        if(i%2==0) swap(arr[2],arr[1]);
        else swap(arr[0],arr[1]);
        cout<<arr[0]<<arr[1]<<arr[2]<<endl;

    }
    for(int j=0;j<3;j++)
    {
        if(arr[j]==1)
        {
            cout<<j;
            break;
        }
    }
    return 0;
}

