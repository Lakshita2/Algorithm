// 0/1 Knapscak Problem

#include<iostream>
using namespace std;

int main(){
	int wm,n;
	cout<<"Enter capacity of knapsack: ";
	cin>>wm;
	cout<<"Enter no. of objects: ";
	cin>>n;
	int w[n];
	int p[n];
	cout<<"Enter weight and profit of each object:\n";
	for(int i=0; i<n; i++){
	     cin>>w[i]>>p[i];
	}
	int sol[n+1][wm+1];
	for(int i=0; i<n+1; i++){
		sol[i][0]= 0;
	}
	for(int i=0; i<wm+1; i++){
		sol[0][i]= 0;
	}
	
	for(int i=1; i<n+1; i++){
	for(int j=1; j<wm+1; j++){
		if(w[i-1]<=j){
			if(p[i-1]+sol[i-1][j-w[i-1]]>sol[i-1][j]){
				sol[i][j] = p[i-1]+sol[i-1][j-w[i-1]];
			}
			else{
				sol[i][j] = sol[i-1][j];
			}
		}
		else{
			sol[i][j]= sol[i-1][j];
		}
	}
	}
	
	for(int i=0 ; i<n+1;i++){
		for(int j=0; j<wm+1; j++){
			cout<<sol[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
cout<<"Maaximum profit: "<<sol[n][wm]<<endl;

int i=n,j=wm;
while(i>0 && j>0){
	if(sol[i][j]!=sol[i-1][j]){
		cout<<i-1<<endl;
		j=j-w[i-1];
		i=i-1;
		
	}
	else{
		i=i-1;
	}
	
}
	
	
	

	return 0;
}
