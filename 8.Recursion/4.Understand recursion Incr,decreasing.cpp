#include <iostream>
using namespace std;
void decr( int n){
	//base case
	if(n==0){
	return ;
	}
	cout<<n<<",";
	//towards the base case
	decr(n-1);
}

void incr( int n){
	//base case
	if(n==0){
	return ;
	}
	incr(n-1);
	cout<<n<<",";
}

int main() {
	int n;
	cin>>n;
    decr(n);
	cout<<endl;
	incr(n);
	cout<<endl;
	return 0;
}

