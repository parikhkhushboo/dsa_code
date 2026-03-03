#include<iostream>
using namespace std;
int main(){
	int n,key;
	int arr[50];
	cout<<"enter number of element ";
	cin>>n;
	cout<<"enter elements";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int low = 0,high = n-1;
	int found = 0;
	cout<<"enter element to search";
	cin>>key;
	while(low<=high){
		int mid = (low+high)/2;
		if(arr[mid]==key){
			cout<<"element found at index"<<mid+1<<endl;
			found = 1;
			break;
		}
		else if(arr[mid]<key){
			low = mid+1;
		}
		else{
			high = mid -1;
		}
	}
	if(found==0){
		cout<<"element not found"<<endl;
	}
}
