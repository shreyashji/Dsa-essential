#include <iostream>
#include<cstring>
using namespace std;
int main() {
    char sentence[50];
    char temp=cin.get();
    int len=0;
    while(temp!='\n'){
		sentence[len++]=temp;
        //update the value of temp
        temp=cin.get();
    }
	sentence[len++]='\0';
    cout<<"length "<<len <<endl; 
	cout<<sentence<<endl;
}

