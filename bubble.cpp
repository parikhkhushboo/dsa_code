#include<iostream>
using namespace std;
#define MAX 50
int main(){
	int arr[MAX],n;
	cout<<"enter number of element";
	cin>>n;
	cout<<"enter elements :";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	cout<<"sorted array";
	for(int i=0;i<n;i++){
		cout<<arr[i];
	}
}
