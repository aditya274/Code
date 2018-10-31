#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string word[n];
		for(int i=0;i<n;i++){
			cin>>word[i];
		}
		float count = 0;
		for(int i = 0; i<n; i++){
			float time = 0.4;
			bool word_flag = 0;
			for(int k =0;k<n;k++){
				if(word_flag == 0){
					word_flag = 1;
					break;
				}
				if(k != i){
					if(word[k] == word[i]) time = time/2;
				}
			}
			int j = 1;
			bool left_flag = 0, right_flag = 0;
			char s = word[i][0];
			cout<<s<<endl;
			
			if(s == 'f' || s == 'd' ) left_flag = 1;
			else right_flag = 1;
			count += time;					
			cout<<"left_flag="<<left_flag<<"right_flag="<<right_flag<<endl;
			while(word[i][j]!='\0'){
				s = word[i][j];
				if(s =='f'||s=='d'){
					if(left_flag) count+= time/2;
					else count+= time; 
					right_flag = 0;				
				}
				else if(s =='j'||s=='k'){
					if(right_flag) count+= time/2;
					else count+= time; 
					left_flag = 0;					
				}
				cout<<"left_flag="<<left_flag<<"right_flag="<<right_flag<<endl;
				cout<<count<<endl;
				j++;
			}
		}
		cout<<count*10;
	}
}