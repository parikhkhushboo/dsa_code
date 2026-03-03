#include<iostream>
#include<stdlib.h>
using namespace std;
struct dclink{
	int data;
	struct dclink*next;
    struct dclink*pre;	
}*head=NULL;

void insertf(){
	struct dclink*p, *q;
    p = (struct dclink*) malloc(sizeof(struct dclink));
	if(head==NULL){
		
		head = p;
		cin>>p->data;
		p->next=head;
		p->pre=head;
	}
	else{
		q = head;
		while(q->next!=head){
			q = q->next;
		}
		p->next = head;
		head->pre=p;
		q->next = p;
		p->pre = q;
		cin>>p->data;
		
	}
}

void inserte(){
	struct dclink*p, *q;
    p = (struct dclink*) malloc(sizeof(struct dclink));
	if(head==NULL){
		
		head = p;
		cin>>p->data;
		p->next=head;
		p->pre=head;
	}
	else{
		q = head;
		while(q->next!=head){
			q = q->next;
		}
		p->next = head;
		head->pre=p;
		q->next = p;
		p->pre = q;
		cin>>p->data;
	}
}

void insertm(){
	struct dclink*p, *q;
    p = (struct dclink*) malloc(sizeof(struct dclink));
	int i =1;
		int l;
		cout<<"enter position";
		cin>>l;
		if(l==1){
			head = p;
		    cin>>p->data;
		    p->next=head;
		}
		else{
	    q =head;
		while(q->next!=head&&i<l-1){
			q = q->next;
		}
		if(q->next==head){
			p->next=head;
			p->pre=q;
			head->pre=p;
		}
		else{
			p->next=q->next;
			p->pre=q;
			p->next->pre=p;
		}
		q->next=p;
		cin>>p->data;
	}
}

void deletef(){
	struct dclink*p, *q;
    p = (struct dclink*) malloc(sizeof(struct dclink));
	if(head==NULL){
		cout<<"link list is empty";
	}
	else{
		q = head;
		while(q->next!=head){
			q = q->next;
		}
		p = head;
		q->next=p->next;
		p->next->pre=q;
		head = p->next;
		cout<<p->data;
		free(p);
	}
}
void deletee(){
	struct dclink*p, *q;
    p = (struct dclink*) malloc(sizeof(struct dclink));
	if(head==NULL){
		cout<<"link list is empty";
	}
	else{
		q = head;
		p = q->next;
		while(p->next!=head){
			q = q->next;
			p = p->next;
		}
        q->next=head;
        head->pre=q;
        cout<<p->data;
        free(p);
	}
}

void deletem(){
	struct dclink*p, *q;
    p = (struct dclink*) malloc(sizeof(struct dclink));
	if(head==NULL){
		cout<<"link list is empty";
	}
	else{
		q = head;
		int l;
		int i=1;
		cout<<"enter position";
		cin>>l;
		while(q->next!=head&&i<l-1){
			q = q->next;
		}
		p = q->next;
		q->next=p->next;
		p->next->pre=q;
		cout<<p->data;
		free(p);
	}
}

void treverse(){
	struct dclink*p, *q;
	if(head==NULL){
		cout<<"linklist is empty";
	}
	else{
		q = head;
		while(q->next!=head){
			cout<<q->data;
			q = q->next;
		}
		cout<<q->data;
	}
}
int main(){
    while(1==1){
    	int a;
    	cout<<"press 1 for insertion in front"<<endl;
    	cout<<"press 2 for insertion in mid"<<endl;
    	cout<<"press 3 for insertion in end"<<endl;
    	cout<<"press 4 for deletion in front"<<endl;
    	cout<<"press 5 for deletion in mid"<<endl;
    	cout<<"press 6 for deletion in end"<<endl;
    	cout<<"press 7 for treverse"<<endl;
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
    			cout<<"invalid entry";
		}
	}
}
