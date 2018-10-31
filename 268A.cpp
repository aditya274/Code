#include<bits/stdc++.h>
#include<algorithm>
#include<unordered_map>
using namespace std;
int main(){
	int n;
	cin>>n;
	int x, a[n], b[100]={0};
	for(int i=0;i<n;i++){
		cin>>a[i]>>x;
		b[x-1]++;
	}
	int result = 0;
	for(int i=0;i<n;i++){
		result += b[a[i]-1];	
	}
	cout<<result;
}