/*
write a function that search for an element  in row wise and columnwisesorted 2d array
for sorted array 2d => STAIRCASE Search O(n+m) linear
*/
#include<bits/stdc++.h>
using namespace std;
pair<int,int> staircaseSearch(int arr[][4],int n,int m,int key){
	//later if the element is not present return {-1,-1}
	if(key < arr[0][0] or key>arr[n-1][m-1]){
		return {-1,-1};
	}
	//staircase search
	int i=0;
	int j=m-1;
	///downward n-1 , backward 0
	while (i<=n-1 and j>=0){
		if(arr[i][j]==key){
			return{i,j};
		}
		else if(arr[i][j]>key){
			j--;
		}
		else{
			i++;
		}
	}
	return {-1,-1};
}
int main(){
	int arr[][4] ={{10,20,30,40},
				{15,25,35,45},	
				{27,29,37,48},		
				{32,33,39,50}};
				int n=4, m=4;
				pair<int,int> coords = staircaseSearch(arr,n,m,27);
				cout<<coords.first<<" "<<coords.second<<endl;
				return 0;

}
