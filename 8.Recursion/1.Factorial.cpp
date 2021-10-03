#include <iostream>
using namespace std;
//factorial
//recursion takes extra space coz of implicit stack
int fact(int n){
	//base case
	if(n==0){
	return 1;
	}
	int ans = n*fact(n-1); //recursion
	return ans;
}
int main() {
	int n;
	cin>>n;
	cout<<fact(n)<<endl;
}

