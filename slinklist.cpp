#include <iostream>
#include<stdlib.h>
using namespace std;
struct link{
	int data;
	struct link*next;
	
}*head=NULL;


void insertm(){
	struct link*p, *q;
	if(head==NULL){
	    link* p = new link;
		head = p;
		cin>>p->data;
		p->next=NULL;
		
	}
	else{
		int l,i;
		cout<<"at which position you want";
		cin>>l;
		i=1;
		q = head;
		link* p = new link;
		while(q->next!=NULL&&i<l){
			q=q->next;
			i++;
		}
		p->next=q->next;
		q->next=p;
		cin>>p->data;
	}
}
   
void insertf(){
	struct link*p, *q;
	if(head==NULL){
		struct link* p = (struct link*) malloc(sizeof(struct link));
		head = p;
		cin>>p->data;
		p->next=NULL;
		
	}
	else{
		q = head;
		struct link* p = (struct link*) malloc(sizeof(struct link));
		p->next=q;
		cin>>p->data;
		head = p;
	}
	
}
void inserte(){
	struct link*p, *q;
	if(head==NULL){
			struct link* p = (struct link*) malloc(sizeof(struct link));
		head = p;
		cin>>p->data;
		p->next=NULL;
		
	}
	else{
		q = head;
			struct link* p = (struct link*) malloc(sizeof(struct link));
		while(q->next!=NULL){
			q=q->next;
		}
		q->next=p;
		cin>>p->data;
		p->next=NULL;
	}
}

	void deletef(){
		struct link*p, *q;
	
	    if(head==NULL){
	        cout<<"link list is empty";
		
	    }
	    else{
		  q = head;
		  head = head->next;
		  cout<<q->data<<"is deleted\n";
		  free(q);
		  
	    }
}
 void deletee(){
 	struct link*p, *q;
 	if(head==NULL){
	   cout<<"link list is empty";
		
	}
	else{
		q = head;
		while(q->next->next!=NULL){
			q = q->next;
		}
		p = q->next;
		q->next = NULL;
		cout<<p->data<<"is deleted\n";
		free(p);
	}
 }
 void deletem(){
 	struct link*p, *q;
 	if(head==NULL){
	   cout<<"link list is empty";
		
	}
	else{
		int l,i;
		cout<<"enter position you want to delete";
		cin>>l;
		q = head;
		i = 1;
		p = q->next;
		while(q->next!=NULL&&i<l){
			p = p->next;
			q = q->next;
			i++;
		}
		q->next = p->next;
		cout<<p->data<<"is deleted";
		free(p);
	}
 }
void treverse(){
	struct link*p, *q;
	if(head==NULL){
		cout<<"empty link list";
	}
	else{
		q =head;
	    while(q!=NULL){
	    	cout<<q->data;
	    	q = q->next;
		}
	}
}

int main(){

		while(1==1){
			
			int b;
			cout<<"press 1 for front insertion \n";
			cout<<"press 2 for mid insertion\n";
			cout<<"press 3 for end insertion \n";
			cout<<"press 4 for front deletion\n";
			cout<<"press 5 for mid deletion\n";
			cout<<"press 6 for end deletion\n";
			cout<<"press 7 for treverse\n";
			cin>>b;
			switch(b){
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
				cout<<"invalid";
		    }
		}
}

