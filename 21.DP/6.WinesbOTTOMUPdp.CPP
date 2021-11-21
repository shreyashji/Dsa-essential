#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
//top down 
int wines(int dp[][10],int prices[],int L,int R,int y){
    //base case
    if(L>R){
        return 0;
    }
    //if a statse is already complete
    if(dp[L][R]!=0){
        return dp[L][R];
    }
    //rec case
    int pick_left= y*prices[L] + wines(dp,prices,L+1,R,y+1);
    int pick_Right= y*prices[R] + wines(dp,prices,L,R-1,y+1);
    return dp[L][R]=max(pick_Right,pick_left);
      for(int i=0; i<n;i++){
        for(int j=0; j<n;j++){
            cout<<dp[i][j]<<" ";
        }
       cout<<endl;
    }
}
//bOTTOM UP code
int wines_BOTTOM_UP(int prices[],int n){

    vector<vector<int>> dp(n+1,vector<int>(n+1,0));

    for(int i=n-1;i>=0; i--){
        //bottom row to top row
        for(int j=0; j<n;j++){
            if(i==j){
                dp[i][i]=n*prices[i];
            }
           
        else if(i<j){
                //dp(i...j)
                int y=n-(j-i);
                int pick_left= prices[i]*y + dp[i+1][j];
                int pick_right= prices[j]*y + dp[i][j-1];

                dp[i][j]=max(pick_left,pick_right);
            }
            cout<<endl;
        }
    }
    for(int i=0; i<n;i++){
        for(int j=0; j<n;j++){
            cout<<dp[i][j]<<" ";
        }
       cout<<endl;
    }
    return dp[0][n-1];
}

int main(){
    int a[]={2,3,5,1,4};
    int n=5;
    int dp[10][10]={0};
   cout<<wines_BOTTOM_UP(a,n)<<endl;
    return 0;
}