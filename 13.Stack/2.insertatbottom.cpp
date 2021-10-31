#include <iostream>
#include <stack>
#include <string>
#include <bits/stdc++.h>
using namespace std;
//using inbuilt stack
//chaleenge insert at stack bottom
//stl continer default pass by value,here we modified as pass by refrence
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

int main() {
	stack<int> s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	insertatBottom(s,5);
	while(!s.empty()){
		cout<<s.top()<<endl;
		s.pop();
	}
	return 0;
}

