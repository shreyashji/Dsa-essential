#include <iostream>
using namespace std;
//count bits
int count_bits(int n){
	int count=0;
	while(n>0){
		int last_bit=(n&1);
		count +=last_bit;
		n=n>>1;
	}
	return count;
}

int count_bits_hack(int n){
	//faster method
	int ans=0;
	while(n>0){
		//remove the last set bit from the current number
		n=n&(n-1);
		ans++;
	}
	return ans;
}
int main() {
int n;
cin>>n;
cout<<count_bits(n)<<endl;
cout<<count_bits_hack(n)<<endl;
}

