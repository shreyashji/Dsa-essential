
#include <iostream>
using namespace std;

int firstOccur(int arr[], int n, int key){
	//base case
	if(n==0){
		return -1;
	}
	// recusrive case
	if(arr[0]==key){
		return 0;
	}
	int subIndex= firstOccur(arr+1, n-1,key);
	if(subIndex!=-1){
		return subIndex+1;
	}
	return -1;
}

int main() {
	// Recursion first occurence
	int arr[] = {1,3,5,7,6,2,11,21};
	int n= sizeof(arr)/sizeof(int);
	int key=7;
	cout<<firstOccur(arr,n,key);
	return 0;
}

