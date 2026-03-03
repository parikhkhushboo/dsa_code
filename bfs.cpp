#include<iostream>
using namespace std;
#define MAX 5

//void BFS(int adj[][MAX],int visited[],int start){
//	int queue[MAX],rear = -1,front = -1;
//	queue[++rear]=start;
//	visited[start]=1;
//	while(front!=rear){
//		start=queue[++front];
//		cout<<char(start+65);
//		for(int i=0;i<MAX;i++){
//			if(adj[start][i]==1&&visited[i]==0){
//				queue[++rear]=i;
//				visited[i]=1;
//			}
//		}
//	}
//}
void DFS(int adj[][MAX],int visited[],int start){
	int stack[MAX],top = -1;
	cout<<char(start+65);
	stack[++top]=start;
	visited[start]=1;
	while(top!=-1){
		start = stack[top];
		int i;
		for(i=0;i<MAX;i++){
			if(adj[start][i]==1&&visited[i]==0){
				stack[++top]=i;
				cout<<char(i+65)<<"->";
				visited[i]=1;
				break;
			}
		}
		if(i==MAX){
			top--;
		}
	}
}
int main(){
	int adj[MAX][MAX];
	int visited[MAX]={0};
	cout<<"enter adj matrix";
	for(int i=0;i<MAX;i++){
		for(int j=0;j<MAX;j++){
			cin>>adj[i][j];
		}
	}
//	cout<<"BFS traversal";
//	BFS(adj,visited,0);
	cout<<"DFS traversal";
	DFS(adj,visited,0);
}
