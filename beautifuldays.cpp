#include <iostream> 
#include <string> 
#include<math.h>

using namespace std;
long beautifulDays(int i, int j, int k) {
    long count = 0;
    for(long m = i; m<=j ; m++)
    {
        if((abs(m - ((m%10)*10+(m/10))))%k==0)
            count++;
    }
return count;
}

int main()
{
	int i,j,k;
	cin>>i>>j>>k;
	cout<<beautifulDays(i,j,k);
}
