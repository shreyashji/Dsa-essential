#include <iostream>
using namespace std;

int main() {
	//Dynamic array 
	int n;
	cin>>n;
	int *arr= new int [n];
	cout<<arr<<endl;
	for(int i=0; i<n; i++){
		arr[i]=i;
		cout<<arr[i]<<" ";
	}
	//delete
	delete [] arr;
	cout<<arr<<endl;
	return 0;

}

