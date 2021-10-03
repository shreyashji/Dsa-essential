#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

void counting_sort(int a[],int n){
int largest= -1;
for(int i=0; i<n; i++){
		largest=max(largest,a[i]);
	}
	//create a count array which is dynamic ,can also use vector 
	//vector<int>  freq(largest+1,0)
	int *freq= new int[largest+1];
	//update the freq array
	for(int i=0; i<n; i++){  //works in O(N) time
		freq[a[i]]++;
	}

	//put back the elements from freq into original array
	int j=0;
	for(int i=0; i<= largest; i++){ //works in O(N+range) time linear complexity
		while(freq[i]>0){
			a[j]=i;
			freq[i]--;
			j++;
		}
	}
	return ;
}

int main(){
	int arr[]= {88,97,10,12,15,1,5,6,12,5,8};
	int n=sizeof(arr)/sizeof(int);

	counting_sort(arr,n); 
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}