
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	//binary AND(&)-> 0&0=0, 1&1=1 only all are 0
	//OR, only 0|0=0,1|1=1,0|1=1,1|0=1, if 1one bit is 1 the its 1 
	//XOR, both bits are same result is 0 and diff its 1
	//1's complement
	//NOT-> 0=1,1=0, FLIP ALL BITS
	// left shift, right shift
	int x=0;
	cout<<(~x)<<endl;
	return 0;
}

