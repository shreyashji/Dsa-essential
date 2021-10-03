#include <iostream>
using namespace std;

int power(int a, int n){
	//base case
	if(n==0){
		return 1;
	}
	// recusrive case
	return a*power(a,n-1);
}
int main() {
	// Recursion first occurence
	int a,n;
	cin>>a>>n; 
	cout<<power(a,n)<<endl;
	return 0;
}

