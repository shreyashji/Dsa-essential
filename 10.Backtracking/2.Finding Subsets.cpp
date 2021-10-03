#include <iostream>
using namespace std;
//given a string find all subsets of the given strings
void findsubsets(char *input,char *output ,int i,int j){
	//base case
	if(input[i]=='\0'){
		//print our array
		output[j]='\0';
		if(output[0]=='\0'){
			cout<<"NULL";
		}
		cout<<output<<endl;
		return;
	}
		//rec case
		//include ith letter
		output[j]=input[i];
		findsubsets(input,output,i+1,j+1);
		//exclude the ith letter
		//overwrite
		findsubsets(input,output,i+1,j);
}

int main() {
	// backtracking on array code
	char input[100];
	char output[100];
	cin>>input;
	findsubsets(input,output,0,0);
	return 0;
}

