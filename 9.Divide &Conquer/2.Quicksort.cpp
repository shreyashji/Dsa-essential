#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
//quick sort d & q
//nlogn or worst case n^2
//1.chosse a ivot last element
//2.partition array in two parts
//3.recursive sort- quicksort
int partition(vector<int> &a, int s ,int e){
	int pivot=a[e];
	int i=s-1;
	for(int j=s; j<e; j++){
		if(a[j]<pivot){   //current less than pivot
		i++;
		swap(a[i],a[j]);
	}
	}

	swap(a[i+1],a[e]); //correct index
	return i+1;

}
void quicksort(vector<int> &a, int s ,int e){
	//base case
	if(s>=e)
	{
		return;
	}
	//rec case
	int p=partition(a,s,e);
	quicksort(a,s,p-1);
	quicksort(a,p+1,e);
}
int main() {
	vector<int> arr{10,5,2,0,7,6,4};

	cout<<arr.size()<<endl;
	int n=arr.size();
	quicksort(arr,0,n-1);
	for(int x:arr){
		cout<<x<<" ";
	}
	return 0;
}

