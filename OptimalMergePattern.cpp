//optimal merge pattern

#include<iostream>
#include<queue>

using namespace std;

int main(){
	priority_queue <int, vector<int>, greater<int> > min_heap;
	int n;
	cout<<"Enter no. of files: ";
	cin>>n;
    int size, first, sec,sum;
    cout<<"Enter sizes of each files: ";
    for(int i=0; i<n; i++){
    	cin>>size;
    	min_heap.push(size);
	}
	
	
	while(min_heap.size()!=1){
		first = min_heap.top();
		min_heap.pop();
		sec = min_heap.top();
		min_heap.pop();
		sum = first+sec;
		min_heap.push(sum);
	}
	cout<<"NO. OF MOVES: "<<min_heap.top()<<endl;
	min_heap.pop();
	
	return 0;
}
