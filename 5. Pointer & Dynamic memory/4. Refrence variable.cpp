
#include <iostream>
using namespace std;

int main() {
	
	int x=10;
	//refrence variable
	int &y=x;
	y++;
	x++;
	cout<<x<<endl;
	cout<<y<<endl;	

	return 0;
}

