#include <iostream>
using namespace std;
//grid paths ,find the no. of ways to reach bottom right corner strting from top left, at each cell you can move 
//right or down , i/p = 2d matrix
//output=integer denoting number of ways
int gridways(int i,int j,int m,int n){
	//last rows m-1,n-1,last cell, m is vertical,n is horizontal
	if(i==m-1 and j==n-1){
		return 1;
	}
	//if anypoint we go outside the grid
	if(j>=n or i>=m){
		return 0;
	}
	int ans= gridways(i+1,j,m,n) + gridways(i,j+1,m,n);
	return ans;
}
int main() {
	// your code goes here
	int m,n;
	cin>>m>>n;
	cout<<gridways(0,0,m,n);
	return 0;
}

