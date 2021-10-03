
#include <iostream>
using namespace std;
int getIthbit(int n,int i){
 int mask=(1<<i);
 return (n & mask)> 0? 1 :0;

}
int main() {
	// GET ITH BIT, 
	//SET ith bit
	//clear ith bit
	int n=5;
	int i;
	cin>>i;
	cout<<getIthbit(n,i)<<endl;
	return 0;
}

