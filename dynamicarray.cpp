#include <iostream>
#include<process.h>
#include<stdlib.h>
using namespace std;

int main(){
	int *arr,no_ele,i;
	int new_size;
	arr = (int*)malloc(no_ele *sizeof(int));
	cin>>no_ele;
	cout<<"enter element";
	for(i=0;i<no_ele;i++){
		cin>>arr[i];
	}
	for(i=0;i<no_ele;i++){
		cout<<arr[i]<<endl;
	}
	cin>>new_size;
	int* temp = (int *)realloc(arr,new_size *sizeof(int));
	arr = temp;

	for(i=no_ele;i<new_size;i++){
		cin>>arr[i];
	}
	for(i=0;i<new_size;i++){
		cout<<arr[i]<<endl;
	}
}
