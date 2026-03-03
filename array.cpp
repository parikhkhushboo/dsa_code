#include<iostream>
#include<process.h>
#include<stdlib.h>
using namespace std;
int main(){
	int i=0,n=6,num=100,pos=3;
	int arr[10]={20,21,23,34,45,29};
	for(i=n-1;i>=pos;i--){
		arr[i+1]=arr[i];
	}
	arr[pos]=num;
	n=n-1;
	cout<<num;
	for(i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}
}
