#include <iostream>
using namespace std;
string spell[]= {"zero", "one", "two","three", "four","five", "six", "seven", "eight", "nine"};

void printspell(int n){
	if(n==0){
		return ;
	}
	//extract last digit
	int last_digit=n%10;
	printspell(n/10);
	cout<<spell[last_digit]<<" ";
}

int main() {
	// 2021 to two zero two one
	int n;
	cin>>n;
	printspell(n);

	return 0;
}

