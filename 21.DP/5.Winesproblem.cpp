/* input 
wines price=[2,3,5,1,4] y=1  y=year
             L        R 
y=2 price[4,6,10,1,8]
y=3 price[6,9,15,1,12]

o/p=50
expalnation: 2*1+4*2+1*3+3*4+5*5=50

f(L,R,y)=p[L]*y+f(L+1,R+1)
        =p[R]*y+f(L,R-1,y+1)

*/
#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

//top down dp code
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

}

int main(){
    int a[]={2,3,5,1,4};
    int n=5;
    int dp[10][10]={0};
    cout<<wines(dp,a,0,n-1,1)<<endl;
    
    for(int i=0; i<n;i++){
        for(int j=0; j<n;j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}