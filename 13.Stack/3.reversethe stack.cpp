#include <iostream>
#include <stack>
#include <string>
#include <bits/stdc++.h>
using namespace std;
//using inbuilt stack
//reverse the stack
void insertatBottom(stack<int> &s,int data){
	//base case
	if(s.empty()){
		s.push(data);
		return;
		}
		//rec case
		int temp=s.top();
		s.pop();
		insertatBottom(s,data);
		//anything written here get executed
		s.push(temp);
}

void reverse(stack<int> &s){
	//base case
	if(s.empty()){
		return;
	}
	int t=s.top();
	s.pop();
	reverse(s);
	insertatBottom(s,t);
}

int main() {
	stack<int> s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);

	reverse(s);
	//insertatBottom(s,5);
	while(!s.empty()){
		cout<<s.top()<<endl;
		s.pop();
	}
	return 0;
}

