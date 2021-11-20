#include <bits/stdc++.h>
#include <climits>
using namespace std;
//bottom up approach
int lis(vector<int> arr){
    int n=arr.size();
    vector<int> dp(n,1);
    int len=1; // it will store maximum of all value

    for(int i=1; i<n; i++){   
        for(int j=0; j<i; j++){ //for every element we go to all the elements
            if(arr[i]>arr[j]){ //tat means i can be arrange to that particular sequence
                dp[i]=max(dp[i],1+dp[j]); // dp[j] denotes the lenght of the sequence
                len=max(len,dp[i]);//update that particular length
            }
        }
    }
    return len;
}

int main() {
	vector<int> arr ={50,4,10,8,30,100};
    cout<<lis(arr)<<endl;
    return 0;
}

