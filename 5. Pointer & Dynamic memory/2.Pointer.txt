
#include <iostream>
using namespace std;

int main() {
	
	//a pointer is a var that holds address of another variable
	int x=10;
	float y=5.5;
	cout<< &x <<endl;
	//cout<< &y <<endl;

	//demo pointer
	int *xptr =&x;
	cout<<xptr<<endl;

	//address of pointer variable
	cout<< &xptr <<endl;

	//pointer to a pointer variable
	int **xxptr = &xptr;
	cout<< xxptr<<endl;
	return 0;
}

