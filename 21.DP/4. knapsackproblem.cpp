#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;
//top down approach knapsack problem this is easy
int knapsack(int wts[],int prices[], int N, int W){
	//base case
	if(N==0 OR W==0){
		return 0;
	}
	//recursive case
	int inc=0, exc=0;
	if(wts[N-1]<=W){
		inc= prices[N-1]+knapsack(wts, prices,N-1,W-wts[N-1]);
	}
	exc=knapsack(wts,prices,N-1,W);
	return max(inc,exc);
}
//bottom up approach
//inc=include, exc = exclude
//time compl= O(NW)
int knapsack(int wts[],int prices[], int N, int W){
	vector<vector<int> > dp(N+1,vector<int>(W+1,0));
		for(int n=1; n<=N; n++ ){
			for(w=1;w<=w;w++){
				int inc=0,exc=0;
				if(wt[n-1]<=w){
					inc = price[n-1]+dp[n-1][w-wt[n-1]];
				}
				exc=dp[n-1][w];

				dp[n][w]=max(inc,exc);
			}
		}

return 0;
}
int main() {
	// your code goes here
	int wts[]= {2,7,3,4};
	int prices[]={5,20,20,10};
	int N=4;
	int w=11;
	cout<<knapsack(wts,prices,N,W)<<endl;;
	return 0;
}

