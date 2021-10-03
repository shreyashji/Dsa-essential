#include <bits/stdc++.h>
#include <iostream>
using namespace std;
//write a function that takes input an sorted array of distict integers,
//which is rotated about a pivot point and finds the index of any given element
//ex [4,5,6,7,0,1,2,3],k=6 ,smaple o/p=6
//use binary search
int rotated_search(vector<int> a,int key){
	int n=a.size();
	int start=0;
	int end=n-1;
	while(start<=end){
		int mid=(s+e)/2;
		if(a[mid]==key){
			return mid;
		}
		//2 case either on left side or right side
		if(a[start]<=a[mid]){
			//left
			if(key>=a[start] and key<=a[mid]){
				end=mid-1;	
			}
			else{
				start=mid+1;
			}
		}
		else{
			//right side
			if(key>=a[mid] and key<=a[end]){
				start=mid+1;
			}
			else{
				e=mid-1;
			}
		}
	}
	return -1;

}
int main() {
	int n;
	cin>>n;
	vector<int>  a{4,5,6,7,0,1,2,3};
	int key;
	cin>>key;
	cout<<rotated_search(a,key)<<endl;
	return 0;
}

