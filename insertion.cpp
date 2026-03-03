#include<iostream>
using namespace std;
#define MAX 50
int main(){
	int arr[MAX],n;
	cout<<"enter number of elements:";
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=1;i<n;i++){
		int key=arr[i];
		int j=i-1;
		while(j>=0&&arr[j]>key){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
	}
	cout<<"sorted array";
	for(int i=0;i<n;i++){
		cout<<arr[i];
	}
}
