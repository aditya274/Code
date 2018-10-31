#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
	int n,x;
	cin>>n>>x;
	int c[n];
	for(int i =0; i<n;i++){
		cin>>c[i];
	}
	sort(c, c+n);
	long long result = 0;
	for(int i=0;i<n;i++){
		result+= c[i]*x;
		if(x!=1) x--;
		cout<<x;
	}
cout<<result;
}