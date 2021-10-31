#include <iostream>
#include <stack>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main() {
	stack<string> books;
	books.push("c++");
	books.push("java");
	books.push("python");
	books.push("django");
	while(!books.empty()){
		cout<<books.top();
		books.pop();
	}
	return 0;
}

