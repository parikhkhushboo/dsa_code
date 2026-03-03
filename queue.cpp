#include<iostream>
#include<stdlib.h>

using namespace std;
int f = -1,r = -1,q[5],m= 4;
void insert(){
	if((f==0&&r==m)||(r==f-1)){
		cout<<"queue is full";
		
	}
	else{
		if(f==-1){
			f=0;
			r=0;
			cin>>q[r];
		}
		else{
			if(r==m&&f!=0){
				r=0;
				cin>>q[r];
			}
			else{
				cin>>q[++r];
			}
		}
	}
}

void treverse(){
        if(f<r){
		    
			for(int i=f;i<=r;i++){
				cout<<q[i];
			}
		}
		else{
			for(int i=f;i<=m;i++){
			for(int i=0;i<=r;i++){
				cout<<q[i];
		    }
		}
	}
}

void deletei(){
	if(r==-1){
		cout<<"queue is empty";
		
	}
	else{
		if(r==f){
			cout<<q[f];
			r=f=-1;
		}
		else if(f==m&&r<f){
			cout<<q[f];
			f=0;
		}
		else{
			cout<<q[f];
			f++;
		}
		
	}
}
int main(){
	while(1==1){
		int a;
		cout<<"press 1 for insert";
		cout<<"press 2 for delete";
		cout<<"press 3 for treverse";
		cin>>a;
		switch(a){
			case 1:
				insert();
				break;
			case 2:
				deletei();
				break;
			case 3:
				treverse();
				break;
			default:
				cout<<"invalid entry";
		}
	}
}
