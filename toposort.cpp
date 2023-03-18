#include<iostream>
#include<stack>
using namespace std;

int main(){
int adj[6][6];
int indegree[6];
stack <int> st;
for(int i=0 ; i<6; i++){
	indegree[i]=0;
}
for(int i= 0; i<6; i++){
 for(int j=0; j<6; j++){
 	cin>>adj[i][j];
 	if (adj[i][j]==1){
 		indegree[j]+=1;
	 }
 }	
}

for(int i=0; i<6; i++){
	if(indegree[i]==0){
		st.push(i);
	}
}

int vertex;
while(!st.empty()){
vertex = st.top();
//std::cout<<vertex<<" ";
printf("%d ", vertex);
st.pop();
for(int i=0; i<6; i++){
	if(adj[vertex][i]==1){
	 adj[vertex][i]=0;
	 indegree[i]-=1;
	 if(indegree[i]==0){
		st.push(i);
	}	
	}
	
	
}	
}


return 0;
}

