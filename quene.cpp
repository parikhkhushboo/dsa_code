#include <iostream>
#include <process.h>

using namespace std;

int front=-1 , rear=-1 , q[5] , m=4;
void insert(){
	if(rear==m){
		cout<<"quene is full";
	}
	else{
		if(front==-1){
			rear=front=0;
			cin>>q[rear];
		}
		else{
			cin>>q[++rear];
		}
	}
}

void deletes(){
	if(rear==-1){
		cout<<"quene is empty";
	}
	else{
		if(rear==front){
			cout<<q[front];
			rear=front=-1;
		}
		else{
			cout<<q[front];
			front++;
		}
	}
}
void treverse(){
	if(front==-1){
		cout<<"queue is empty";
	}
	else{
		int i;
		for(i=front;i<=rear;i++){
			cout<<q[i];
		}
	}
}
int main(){
	while(1==1){
	int a;
	cout<<"for inserting values press 1";
	cout<<"for deleting values press 2";
	cout<<"for treverse press 3";
	cout<<"enter 1 or 2 or 3";
	cin>>a;
	switch(a){
		case 1:
			insert();
			break;
		case 2:
			deletes();
			break;
		case 3:
			treverse();
			break;
		default:
			cout<<"invalid entry";
		
	}
}
}
