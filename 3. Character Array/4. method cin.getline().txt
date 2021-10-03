#include <iostream>
#include<cstring>
using namespace std;
//gven a sentence count the no. of alphabets, digit,spaces in the sentence 

int main() {
//for large inputs or paragraphs
    char sentence[1000];
	cin.getline(sentence,1000,'#'); //in last there is stopping criteria

	cout<<sentence<< endl;
	  return 0;
}

