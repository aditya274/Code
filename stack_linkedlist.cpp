#include<iostream>
#include<cstdlib>
using namespace std;
struct Node{
	int data;
	struct Node *link;
};
struct Node* top = NULL;
void Push(int x){
	Node* temp = new Node;
	temp->data = x;
	temp->link = top;
	top = temp;
}
void Pop(){
  	Node* temp = new Node;
	if(top == NULL) cout<<"Stack is empty.";return;
	temp = top;
	top=top->link;
	
}
void Print(){
	Node* temp = new node;
	temp = 
	
}
int main(){
	int option,x;
	start:
	cout<<"1.Push\n2.Pop\n3.Print";
	cin>>option;
	switch(option){
		case(1):cin>>x;Push(x);
		case(2):Pop();
		//case(3):Print();
		default:goto start;
	}
}

