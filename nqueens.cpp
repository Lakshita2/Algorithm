#include<iostream>
#include<math.h>
using namespace std;

//int x[4];

void print(int n, int *x) {
for(int i=1; i<=n; i++){
cout<<x[i]<<" ";
}
cout<<endl;
}


bool Place(int k, int i, int *x ) {
for(int j=1; j<=k-1;j++){
if(x[j]==i || abs(x[j]-i)==abs(j-k) ){
return false;
}
}
return true;

}

void NQueen(int k, int n, int *x){
for(int i=1; i<=n; i++){
if(Place(k,i, x)){
x[k]=i;
if(k==n){
print( n, x);
return;
}
else{
NQueen(k+1, n, x);
}
}
}
}



void NQueenHelper(int n){
    int *x = new int[n+1];
NQueen(1,n, x);
}


//Program Heading
int main()
{
  int n;
  cout<<"Enter no. of Queens: ";
  cin>>n;
  NQueenHelper(n);
 
return 0;
}

//output
// Enter no. of Queens: 4
// 2 4 1 3 3 1 4 2