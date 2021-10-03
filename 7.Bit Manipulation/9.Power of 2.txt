#include <iostream>
using namespace std;
//a no. is power of 2 or not

int main() {
	int n;
	cin>>n;

	if( (n & (n-1))==0 ){
		cout<<"power of 2";
	}
	else{
		cout<<"not a power of 2";
}
	return 0;
}

