//write a program to print all the nodes visitedable from given starting node in directed graph using bfs
//0 1 1 1
//0 0 0 1
//0 0 0 0
//0 0 1 0
 


#include<iostream>
#include<vector>
using namespace std;

int *visited;
int n;
int **adj;
int r=-1, f=0;
int q[30];

void bfs(int v){
for(int i=0; i<n; i++){
if(adj[v][i] && !visited[i]){
q[++r] = i;
}

}
if(f<=r){
visited[q[f]]= 1;

bfs(q[f++]);
}
}


void check(){
for(int i=0 ; i<n; i++){
if(visited[i]){
cout<<i<<" ";
}
}
}


//Program Heading
int main()
{

int s;
cout<<"Enter number of vertices: ";
cin>>n;
visited = new int[n];
for(int i=0; i<n; i++){
visited[i]=0;
}


//input adjacency matrix
adj = new int* [n];
for(int i=0; i<n; i++){
adj[i] = new int[n];
for(int j=0; j<n; j++){
cin>>adj[i][j];
}
}

for(int i=0; i<n; i++){

for(int j=0; j<n; j++){
cout<<adj[i][j];
}
}

cout<<"Enter starting vertex: ";
cin>>s;
visited[s]=1;

bfs(s);
check();


return 0;
}
