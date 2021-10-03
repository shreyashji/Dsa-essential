
#include <iostream>
using namespace std;
int  getIthbit(int n,int i){
 int mask=(1<<i);
 return (n & mask)> 0? 1 :0;
}
void clearIthbit(int n,int i){
int mask=~(1<<i);
n=n & mask;
}
int main() {
	// GET ITH BIT, 
	//SET ith bit
	//clear ith bit
	int n=13;
	int i;
	cin>>i;
	//cout<<getIthbit(n,i)<<endl;
    //setIthbit(n,i);
	clearIthbit(n,i);
		cout<<n;
	return 0;
}

