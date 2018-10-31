#include "bits/stdc++.h" 
using namespace std ;

int main()
{
    int n,max=0,hash[26]={0};;
    cin>>n;char s[n];for(int i=0;i<n;i++){cin>>s[i];hash[s[i]-97]++;cout<<s[i]<<" "<<hash[s[i]-97]<<endl;}
    for(int j=0;j<26;j++){if(hash[j]>max) max = hash[j];}
    cout<<n-max;
}
