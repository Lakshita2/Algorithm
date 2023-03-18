//floyd warshall
#include<iostream>
using namespace std;


int main(){
int n;
printf("Enter no. of vertices in graph: ");
cin>>n;
int c[n][n];
printf("Enter the adjacency matrix:\n");
for(int i=0; i<n; i++){
for(int j=0; j<n; j++){
cin>>c[i][j];
if(i!=j && c[i][j]==0){
c[i][j]= 999999;
}
}


}

for(int k=0; k<n; k++){
for(int i=0; i<n; i++){
for(int j=0; j<n; j++){
if(i==j || i==k || j==k){
continue;
}
else{
if(c[i][j]>c[i][k]+ c[k][j]){
c[i][j]= c[i][k]+ c[k][j];
}
}
}
}
}

for(int i=0; i<n; i++){
for(int j=0; j<n; j++){
if(c[i][j]== 999999){
printf("INF ");
}
else{
printf("%d ",c[i][j]);
}

}
printf("\n");

}

return 0;
}
