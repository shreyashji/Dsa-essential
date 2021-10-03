
#include <iostream>
#include<cstring>
using namespace std;

//character array 
// char a[100];
// char a[100]={'a','s','c'};
// char a[100]={'a','s','c','\0'};
// char a[100]="abc";
int main() {
	// your code goes here
    //char a[]={'a','b','c','d','e','f','g','\0'};
    char a[]="abcdefgi";
    cout<<a<<endl;

    char b[100];
    cin>>b;  // doesnt work when have space like hello world only hello will print
    cout<<b<<endl;

    cout<<strlen(a)<<endl; //no. of visible char
    cout<<sizeof(a)<<endl; //+1 becoz of null chaRACTER


	return 0;
}

