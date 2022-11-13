//longest common subsequence

#include<iostream>
using namespace std;

string direction[10][10];

void printSubseq(string s1,int i, int j){
	
	if(i==-1 ||j==-1){
		return ;
	}
	if(direction[i][j]== "diagonal" ) 
	{
	  
	 
	  printSubseq( s1, i-1,j-1);
	  cout<<s1[i];
	}
	else if(direction[i][j]== "up"){
		printSubseq(s1, i-1,j);
	}
	else if(direction[i][j]== "left"){
		printSubseq(s1, i,j-1);
	}
}

int main(){
	string s1, s2;
	cout<<"Enter string s1 and s2: ";
	cin>>s1>>s2;
	int m = s1.length()+1, n = s2.length()+1;
	
	int mat[m][n];
	
	for(int i=0; i<m; i++){
	 mat[i][0] = 0;
	}
	for(int i=0; i<n; i++){
	 mat[0][i] = 0;
	}
	for(int i=1; i<m; i++){
		for(int j=1; j<n; j++){
		 if(s1[i-1]==s2[j-1]){
		 	mat[i][j] = 1 + mat[i-1][j-1];
		 	direction[i-1][j-1] = "diagonal";
		 	
		 	
		 }
		 else{
		 	if(mat[i-1][j]>=mat[i][j-1]){
		 		mat[i][j] =mat[i-1][j];
		 		direction[i-1][j-1] = "up";
			 }
			else{
				mat[i][j] =mat[i][j-1];
		 		direction[i-1][j-1] = "left";
			}
		 	
		 }
		}
		
		
	}
   
	cout<<"Length of longest subsequence is: "<<mat[m-1][n-1]<<endl;
	 printSubseq(s1,s1.length()-1, s2.length()-1);
	return 0;
	
}
