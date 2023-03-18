//write a program to check given graph is connected or not using dfs method
/*0 1 1 1 0 0
0 0 0 1 0 0
0 0 0 0 0 0
0 0 1 0 0 0
0 0 0 0 0 1
0 0 0 0 0 0 */



#include<iostream>
using namespace std;

int *reach;
int n;
int **adj;
void dfs(int v){
reach[v]= 1;
for(int i=0;i<n; i++){
        if(adj[v][i] && !reach[i]){
        cout<<v<<"->"<<i<<endl;
        dfs(i);
       
}
}
}

void checkConnected(){
    int flag=0;
for(int i=0; i<n; i++){
if(reach[i]==0){
cout<<"Not Connected "<<endl;
flag=1;
break;
}

}
if(flag==0){
cout<<"Connected"<<endl;
}
}



//Program Heading
int main()
{


cout<<"Enter number of vertices: ";
cin>>n;
reach = new int[n];
for(int i=0; i<n; i++){
reach[i]=0;
}

//input adjacency matrix
adj = new int* [n];
for(int i=0; i<n; i++){
adj[i] = new int[n];
for(int j=0; j<n; j++){
cin>>adj[i][j];
}
}




dfs(0);
checkConnected();


return 0;
}