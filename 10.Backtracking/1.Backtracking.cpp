#include <iostream>
#include<vector>
using namespace std;
//algorithimic technique
//recursivelty tring to build solution
//searching the entire search space to solve a computation problem
//problem types :-
//decision problem,optimization problem, enumeration probblem
void printarray(vector<int> arr,int n){
		for(int i=0; i<n; i++){
			cout<<arr[i]<<" ";
		}
		cout<<endl;
}
//void fillarray(int *arr,int i ,int n,int val)
//vector is pass by 
void fillarray(vector<int> & arr,int i ,int n,int val){
	//base case
	if(i==n){
		//print our array
		printarray(arr,n);
		return;
	}
	//rec case
	arr[i]=val;
	fillarray(arr,i+1,n,val+1);
	//backtracking step
	arr[i]= -1*arr[i];

}

int main() {
	// backtracking on array code
	vector<int> arr(100,0);
	int n;
	cin>>n;
	fillarray(arr,0,n,1);
	printarray(arr,n);
	return 0;
}

