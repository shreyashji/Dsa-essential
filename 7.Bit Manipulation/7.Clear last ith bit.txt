#include <iostream>
using namespace std;
void clearIthbit(int n,int i){
int mask=~(1<<i);
n=n & mask;
}
void  updateIthbit(int n,int i,int v){
	clearIthbit(n,i);
    int mask=(v<<i);
    n=n | mask; //set the right value
}
void clearlastBits(int &n ,int i){
 int mask=(-1<<i);
 n=n&mask;
}

int main() {
	// GET ITH BIT, 
	//SET ith bit
	//clear ith bit
	int n=15;
	int i=2;
	
	//cout<<getIthbit(n,i)<<endl;
    //setIthbit(n,i);
	clearlastBits(n,i);
		cout<<n<<endl;
	return 0;
}

