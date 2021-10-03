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

int main() {
	// GET ITH BIT, 
	//SET ith bit
	//clear ith bit
	int n=13;
	int i;
	cin>>i;
	//cout<<getIthbit(n,i)<<endl;
    //setIthbit(n,i);
	updateIthbit(n,i,0);
		cout<<n<<endl;
	return 0;
}

