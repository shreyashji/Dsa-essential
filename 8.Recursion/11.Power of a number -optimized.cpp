#include<iostream>
//logn space time
using namespace std;

int fastpower(int a, int n){
	//base case
	if(n==0){
		return 1;
	}
	int subproblem =fastpower(a,n/2);
	int subproblemsq=subproblem*subproblem;
	if(n&1){
	return a*subproblemsq;
	}
	return subproblemsq;
}
int main() {
	// Recursion first occurence
	int a,n;
	cin>>a>>n; 
	cout<<fastpower(a,n)<<endl;
	return 0;
}

