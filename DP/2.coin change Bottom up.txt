#include <bits/stdc++.h>
#include <climits>
using namespace std;
//TOP DOWN DP


//bottom up approach
int minNoCoinforchange(int m, vector<int> denoms){
    vector<int> dp(m+1,0);
        dp[0]=0;
    for(int i=1; i<=m; i++){
        dp[i]=INT_MAX;
            for(int c: denoms){ 
            //for every type of coin in denoms vector,
            //can we go back to these index 
             //jump of size c
             //corner case if denoms contain only (5,7,10) we are storing infinity no as answer
             //after and this check solve this problem
            if(i-c>=0 and dp[i-c]!=INT_MAX){    
                 dp[i]=min(dp[i],dp[i-c]+1);
            } 
        }
    }
    return dp[m]==INT_MAX?-1 : dp[m];
}

int main() {
	vector<int> denoms ={1,3,7,10};
     int m=8;
    cout<<minNoCoinforchange(8,denoms)<<endl;
}

