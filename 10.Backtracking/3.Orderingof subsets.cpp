#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//given a string find all subsets of the given strings
bool compare(string a,string b){
    //custom comparison operayoe
	if(a.length()==b.length()){
		return a<b;
	}
	return a.length()<b.length();
}
void findsubsets(char *input,char *output ,int i,int j,vector<string> &list){
	//base case
	if(input[i]=='\0'){
		//print our array
		output[j]='\0';
		string temp(output);
		list.push_back(temp);
		return;
	}
		//rec case
		//include ith letter
		output[j]=input[i];
		findsubsets(input,output,i+1,j+1,list);
		//exclude the ith letter
		//overwrite
		findsubsets(input,output,i+1,j,list);
}

int main() {
	// backtracking on array code
	char input[100];
	char output[100];
	vector<string> list;
	cin>>input;

	findsubsets(input,output,0,0,list);
	sort(list.begin(),list.end(),compare);
	//print the output
	for(auto s:list){
		cout<<s<<",";
	}
	return 0;
}

