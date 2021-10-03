
#include <iostream>
#include <vector>
using namespace std;

int main() {
	// vector sequence contaianer representing arrYA THt cAN CHANGE IN SIZE
	//demo vector
	//vector<int> arr = {1,2,3,4,5};
     vector<int> arr(10,7); //fill constructor
	 vector<int> arr(100,0) //fill

	//pop_back O(1)
	arr.pop_back();
	//push_back O(1)
	arr.push_back(16);
	//print all the element of the vector
	for(int i=0; i<arr.size(); i++){
		cout<<arr[i]<<endl;
	}
//or 
for(int x:arr){
cout<<x<<endl;
}
	//cout<<arr.size()<<endl; //size of the vector {no. of elements}
	//cout<<arr.capacity()<<endl; //capacity of the vector

	return 0;
}

