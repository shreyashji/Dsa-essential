#include <iostream>
#include <cstring>
using namespace std;
int main() {
	// your code goes here
    char a[1000]="apple";
    char b[1000];
   
    //calculate length
    cout<<strlen(a)<<endl;
    //strcopy
    strcpy(b,a);
    cout<<b<<endl;
    //compare
    cout<<strcmp(a,b)<<endl;

    //str concate
    char web[]="www.";
    char domain[]= "shreyashchoudhary.com";
   // cout<<strcat(web,domain) <<endl;

    strcpy(b,strcat(web,domain));
    cout<<b;
    cout<<strcmp(b,a)<<endl;
    	return 0;
}