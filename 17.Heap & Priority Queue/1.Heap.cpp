#include <bits/stdc++.h>
#include <iostream>
using namespace std;
//heap or priority queue
//max,min heap 
//TIME COMPLEXITY OF PUSH ANY,POP MAX IS o(LOGN ) AND  GET MAX IS o(1)
//actually it is implemented in array
//visualize in COMPLT BINARY TREE
//filling should be in left to right order
//all levels should completely filled
//heap order property
// max heap parent > children
//min heap parent <children
/*
problem with binary tree  memory representation
we dont know where to insert in o(1) time
so tree is needed to maintain parent & child relationship
CBT CAN BE STORED AS AN ARRAY
*/

class heap{
	vectr<int> v;
//o(logn)
	void heapify(int i){
		int left=2*1;
		int right = 2*i+1;

		int minIdx=i;
		if(left<v.size() and v[left]< v[i]){
			minidx=left;
		}
		if(left<v.size() and v[right]< v[minidx]){
			minidx=right;
		}
		if(minidx1=1){
			swap(v[i],v[minidx]);
			heapify(miniidx);
		}
	}
public:
	heap(int default_size=10){
		v.reserve(default_size+1);
		v.push_back(-1);//storing from 12345 index
	};
    //insert function
	void push(int data){
		//ad data to end of the heap
		v.push_back(data);
		int idx=v.size()-1;
		int parent=idx/2;
		while(index>1 and v[index]<v[parent]){
			swap(v[index],v[parent]);
			index=parent;
			parent=parent/2;
		}
	}
}
//return min
int top(){
	return v[1];
}
//remove min element
void pop(){
	//1 swap first and last elmnt
	int idx=v.size()-1;
	swap(v[1],v[idx]);
	v.pop_back();
	heapify(1);
}
bool empty(){
	return v.siz()==1;
}

int main() {
	// your code goes here
	return 0;
}

