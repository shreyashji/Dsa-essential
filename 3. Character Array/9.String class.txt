#include<bits/stdc++.h>
using namespace std;
#include<vector>
int main(){
	//char s[1000] = {'1','a','b','c','0'} not recommended
	//string s="hello world"; // dynamic array
	string s;
	//getline(cin,s,'.'); // third argument is delimmiter
	// for(char ch :s){
	// 	cout<<ch<<",";
	// }
	int n=5;
	vector<string> sarr;
	string temp;

	while(n--){
		getline(cin,temp);
		sarr.push_back(temp);
	}
for(string x:sarr){
	cout<<x<<",";
}

	cout <<s<<endl;
}