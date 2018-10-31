#include<iostream>
using namespace std;
int main()
{
	bool truthtable[10] = {0};
	for(int i=0;i<10;i++)
	{
		cout<<truthtable[i]<<' ';
		truthtable[i] = 1;
	}
	for(int i=0;i<10;i++)
	{
		cout<<truthtable[i]<<'\n 	';
	}
	cout<<endl<<endl;
}
