#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[2][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>arr[j][i];
        }
    }
    int sum =0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            sum+=pow(pow((arr[0][i]-arr[0][j]),2)+pow((arr[1][i]-arr[1][j]),2),2);
        }
    }
    cout<<sum;
    return 0;
}
