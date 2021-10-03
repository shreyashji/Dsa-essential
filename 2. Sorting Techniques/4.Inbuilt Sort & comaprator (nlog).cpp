#include<bits/stdc++.h>
#include<algorithm>
using namespace std;


int main(){
	int arr[]= {-2,3,4,1,5,-12,6,1,3};
	int n=sizeof(arr)/sizeof(int);
	//inbuild sort and reverse function need to import librarary <algorithm>
  	// sort(arr,arr+n); //O(nlogn) others take O(n^2)
 	// reverse(arr,arr+n);
sort(arr,arr+n, greater<int>()); // another way of sorting
	for(auto x: arr){
		cout<<x<<",";
	}
	return 0;
}