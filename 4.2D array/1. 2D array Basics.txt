/*
in  memory everything must be linearized ,twwo common ways of storing arrays
row major, column major
*/

#include <iostream>
using namespace std;
//passed by refrence
void  print(int arr[][100],int n,int m){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}
int main() {
	// your code goes here
	int arr[1000][100];
	//n rows and m cols
		int n,m;
	cin>>n>>m;
	//take inputs
	for(int i=0; i<n; i++){
		for(int j=0;j<m;j++){
			cin>>arr[i][j];
		}
	}
	//print array
	print(arr,n,m);
	return 0;
}

