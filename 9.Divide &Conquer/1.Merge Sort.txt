
#include <iostream>

#include <vector>
using namespace std;

//divide and conquer MERGE SORT
//1. divide
//2 
//3 merge
void merge(vector<int> &array,int s ,int e){
	int i=e;
	int m=(s+e)/2;
	int j=m+1;

	vector<int> temp; //temp array
	while (i<=m and j<=e){
		if(array[i] <array[j]){
		temp.push_back(array[i]); //push back 1st part of the array
		i++;
		}
		else{
		temp.push_back(array[j]);
		j++;
		}
	}
		//copy remaining element from 1st array
			while(i<=m){
			temp.push_back(array[i++]); 
			}
			// or copy remaining element from 1st array
				while(j<=e){
				temp.push_back(array[j++]); 
				}
			//copy back the element form temp to original array
		int k=0;
		for(int idx=s ; idx<=e; idx++){
		array[idx]=temp[k++];
		}
		return;
}

void mergesort(vector<int> &arr,int s ,int e ){
	//base case
	if(s>=e){
		return;
	}
	//rec case
	int mid=(s+e)/2;
	mergesort(arr,s,mid);
	mergesort(arr,mid+1,e);
	return merge(arr,s,e);
}
int main() {
	vector<int> arr{10,5,2,0,7,6,3};
	int s=0;
	int e=arr.size()-1;
	mergesort(arr,s,e);
	for( int x:arr){
		cout<<x<<",";
	}
	cout<<endl;
	return 0;
}

