#include <iostream>
#include <process.h>
#define MAX 5
using namespace std;


int St[MAX],top=-1,m=4;
void push()
{
	if (top==-1){
		top=0;
		cin>>St[top];
	}
	else{
		if(top==m){
			cout<<"stack is full"<<endl;
		}
		else{
			cin>>St[++top];
		}
	}
}
void pop(){
	if(top==-1){
		cout<<"stack is empty";
		
	}
	else{
		cout<<St[top]<<endl;
		top--;
	}
}
void traverse(){
	if(top==-1){
		cout<<"stack is empty";	
	}
	else{
		for(int i=0;i<=top;i++){
			cout<<St[i]<<endl;
		}
	}
}

int main(){
	int a;
	while(1==1){
	cout<<"1.push"<<endl;
	cout<<"2.pop"<<endl;
	cout<<"3.treverse"<<endl;
	cout<<"4.exit"<<endl;
	cin>>a;
	
	switch(a){
		case 1:
			push();
			break;
		case 2:
			pop();
			break;
		case 3:
			traverse();
			break;
		case 4:
			exit(1);
		default:
			cout<<"not valid";
	}
}
}

