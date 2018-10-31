#include <math.h>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long long a,b,c;
        cin>>a>>b>>c;
        long long m = 1000000007;
        int ax = a;
       c = fmod(c,m);
        for(int i=0;i<b-1;i++){
            ax = ax*a;
            ax = fmod(ax,m);
        }
        long long x = ax/c;
        cout<<x<<endl;   
    }
    return 0;
}
