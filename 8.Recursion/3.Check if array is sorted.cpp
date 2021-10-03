#include <iostream>
using namespace std;
bool isSorted(int arr[], int n){
	if(n==1 or n==0){
		return true;
	}
	if(arr[0]<arr[1] and isSorted(arr+1,n-1)){
		return true;
	}
	return false;
}

bool isSortedtwo(int arr[],int i, int n){
	if(i==n-1){
		return true;
	}
	if(arr[i]<arr[i+1] and isSortedtwo(arr,i+1,n)){
		return true;
	}
	return false;
}

int main() {
	int arr[] ={1,2,3,5,4,6};
	int n= sizeof(arr)/sizeof(int);
	//cout<<isSorted(arr,n)<<endl;
	cout<<isSortedtwo(arr,0,n)<<endl;
	return 0;
}

