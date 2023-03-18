//dijkstra
#include<iostream>

using namespace std;

int minDist(bool *visited, int *dist, int n){
int min_dist = 9999999;
int min_vertex;
for(int i=0; i<n; i++){
if(visited[i]==false && dist[i]<min_dist){
min_dist = dist[i];
min_vertex = i;
}
}
return min_vertex;
}

int main(){
int n;
printf("Enter no. of vertices in graph: ");
cin>>n;
int c[n][n];
printf("Enter the adjacency matrix:\n");
for(int i=0; i<n; i++){
for(int j=0; j<n; j++){
cin>>c[i][j];
}

}

bool visited[n];
int dist[n];

for(int i=0; i<n; i++){
dist[i]= 999999;
visited[i] = false;
}

dist[0]= 0;

int count = 0;
while(count<n){

int min_dist_unvisited_v = minDist(visited, dist,n);
for(int i=0; i<n; i++){
   if(i!=min_dist_unvisited_v && c[min_dist_unvisited_v][i]!=0 && visited[i]==false ){
    if ( dist[min_dist_unvisited_v]+c[min_dist_unvisited_v][i]<dist[i]){
    dist[i]= dist[min_dist_unvisited_v]+c[min_dist_unvisited_v][i];
  }
   }
}
visited[min_dist_unvisited_v] = true;
count++;
}

printf("Distance from vertex 0 \n");
for(int i=0; i<n; i++){
printf("%d ", dist[i]);
}


return 0;
}
