#include <iostream>
#include<cstring>
using namespace std;
//gven a sentence count the no. of alphabets, digit,spaces in the sentence 

int main() {
	//store and then count
	//read one by one and then count
    char ch;
    ch=cin.get();
    int alpha=0;
	  int space=0;
	    int digit=0;
    while(ch!='\n'){
		if(ch>='0' and ch<='9'){
			digit++;
		}
		else if(ch>='a' and ch<='z' or ch>='A' and ch<='Z'){
			alpha++;
		}
		else if(ch==' ' or ch=='\t'){
			space++;
		}
		ch=cin.get();
    }
    cout<<"total space "<<space<<endl; 
   cout<<"total alphabets "<<alpha<<endl; 
      cout<<"total digit "<<digit<<endl; 
	  return 0;
}

