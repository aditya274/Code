#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t)
	{
		char s1[3], s2[3];
		cin>>s1>>s2;
		bool check_o = 0, check_b = 0;
		int o_count =0;
		for(int i=0;i<3;i++)
		{
			if(((s1[i] == 'b')||(s1[i] == 'o'))||((s2[i] == 'b')||(s2[i] == 'o')))
			{
				if(s1[i]=='o'||s2[i]=='o')
				check_o = 1;	
				if(s1[i]=='o'&&s2[i]=='o')
				o_count++;
				if(s1[i]=='b'||s2[i]=='b')
				check_b = 1	;			
			}
			else //if(((s1[i] != 'b')||(s1[i] != 'o'))&&((s2[i] != 'b')||(s2[i] != 'o')))
			{
				cout<<"no"<<'\n';
				goto end;
			}
		 }
		 if(o_count>1)
		 {
		  	cout<<"no"<<'\n';
			goto end;
		}
		 if(check_o&&check_b)
		 cout<<"yes"<<'\n'; 
		 end:
		t--;
	}
}
