#include <iostream>
using namespace std;
//pass by refrence &
void applyTax(int & money){
	float tax =0.10;
	money = money - money*tax;
}

int main() {
	// pass by refrence
	int income;
	cin>>income;

	applyTax(income);

	cout<<income<<endl;
	return 0;
}

