#include <iostream>
using namespace std;
//pass by refrence &
//*viewsptr is pointer variable
void watchVideo(int *viewsptr){
	//*viewsptr derefrence operator
	*viewsptr = *viewsptr +1;
}

int main() {
	// pass by refrence
	int views=100;
	//address of operator  &views
	watchVideo(&views);

	cout<< views <<endl;
	return 0;
}

