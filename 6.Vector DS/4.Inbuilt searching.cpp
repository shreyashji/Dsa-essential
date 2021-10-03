
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
//linear search
int main() {
	vector<int> arr= {10,11,2,3,4,6,7,8};
	int key;
	cin>>key;

	vector<int>::iterator it= find(arr.begin(),arr.end(),key);
	if(it!=arr.end()){
		cout<<" present at index"<<it-arr.begin();
	}
	else{
	cout<<"element not found"<<endl;
	}
	return 0;
}

