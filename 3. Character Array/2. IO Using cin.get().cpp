#include <iostream>
#include<cstring>
using namespace std;
int main() {
    char sentence[50];
    char temp=cin.get();

    int len=1;
    while(temp!='\n'){
        len++;
        cout<<temp;
        //update the value of temp
        temp=cin.get();
    }
    cout<<"length "<<len <<endl; 
}

