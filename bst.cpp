#include<iostream>
using namespace std;
struct node{
	int data;
	node *left;
	node *right;
};
node* createnode(int value){
	node* newnode = new node;
	newnode->data=value;
	newnode->left=NULL;
	newnode->right=NULL;
	return newnode;
}
node* insert(node* root,int value){
	if(root==NULL){
		return createnode(value);
	}
	if(root->data<value){
        root->right=insert(root->right,value);
	}
	else if(root->data>value){
		root->left=insert(root->left,value);
	}
	return root;
}
bool search(node* root,int key){
	if(root==NULL){
		return false;
	}
	if(root->data==key){
		return true;
	}
	else if(root->data>key){
		return search(root->left,key);
	}
	else{
		return search(root->right,key);
	}
}

void inorder(node* root){
	if(root!=NULL){
		inorder(root->left);
		cout<<root->data<<endl;
		inorder(root->right);
	}
}

int main(){
	node* root=NULL;
	int n,key,value;
	cout<<"enter number of elements";
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>value;
		root = insert(root,value);
	}
	cout<<"enter value to search";
	cin>>key;
	if(search(root,key)){
		cout<<"element found";
	}
	else{
		cout<<"not found";
	}
	cout<<"inorder ";
	inorder(root);
}
