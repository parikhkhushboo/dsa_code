#include<iostream>
#include<stdlib.h>

using namespace std;

struct dlink{
	struct dlink *pre;
	int data;
	struct dlink* next;
	
}*head=NULL;
void insertf(){
	struct dlink*p;
	 p = (struct dlink*)malloc(sizeof(struct dlink));
	if(head==NULL){
		
		p->pre = NULL;
		p->next = NULL;
		cin>>p->data;
		head = p;
	}
	else{
	
		p->next = head;
		head->pre = p;
		head = p;
	}
}
void inserte(){
	struct dlink*p,*q;
	p = (struct dlink*)malloc(sizeof(struct dlink));
	if(head==NULL){
		
		p->pre = NULL;
		p->next = NULL;
		cin>>p->data;
		head = p;
	}
	else{
		q = head;
	
		while(q->next!=NULL){
			q = q->next;
		}
		q->next = p;
		p->pre = q;
		cin>>p->data;
		p->next = NULL;
	}
}
void insertm(){
	struct dlink*p,*q;
	p = (struct dlink*)malloc(sizeof(struct dlink));
	if(head==NULL){
	
		p->pre = NULL;
		p->next = NULL;
		cin>>p->data;
		head = p;
	}
	else{
		q = head;
		int l;
		cout<<"enter position ";
		cin>>l;
		int i = 1;
		while((q->next!=NULL)&&(i<l-1)){
			q = q->next;
			i++;
		}
		q->next->pre=p;
		p->next = q->next;
		q->next = p;
		p->pre = q;
		cin>>p->data;
		
	}
}
void deletef(){
	struct dlink*p,*q;
	if(head==NULL){
		cout<<"empty link list";
	}
	else{
		q = head;
		head = head->next;
		head->next->pre = NULL;
		free(q);
	}
	
}
void deletem(){
	struct dlink*p,*q;
	if(head==NULL){
		cout<<"empty link list";
	}
	else{
		q = head;
		int i = 1;
		int l;
		p = q->next;
		cout<<"enter position ";
		cin>>l;
		while(q->next!=NULL&&i<l){
			q = q->next;
			p = p->next;
			i++;
		}
		q->next = p->next;
		p->next->pre = q;
		free(p);
	}
}
void deletee(){
	struct dlink*p,*q;
	if(head==NULL){
		cout<<"empty link list";
	}
	else{
		q = head;
		while(q->next->next!=NULL){
			q = q->next;
			
		}
		p = q->next;
		q->next = NULL;
		free(p);
	}
}
void treverse(){
	struct dlink*p,*q;
	if(head == NULL){
		cout<<"empty link list";
	}
	else{
		q =head;
	    while(q!=NULL){
	    	cout<<q->data<<endl;
	    	q = q->next;
		}
	}
}

int main(){
	while(1==1){
		int a;
		cout<<"press 1 for insertion in front\n";
		cout<<"press 2 for insertion in mid\n";
		cout<<"press 3 for insertion in end\n";
		cout<<"press 4 for deletion in front\n";
		cout<<"press 5 for deletion in mid\n";
		cout<<"press 6 for deletion in end\n";
		cout<<"press 7 for treverse\n";
		cin>>a;
		switch(a){
			case 1:
				insertf();
				break;
			case 2:
				insertm();
				break;
			case 3:
				inserte();
				break;
			case 4:
				deletef();
				break;
			case 5:
				deletem();
				break;
			case 6:
				deletee();
				break;
			case 7:
				treverse();
				break;
			default:
				cout<<"invalid input";
		}
	}
}
