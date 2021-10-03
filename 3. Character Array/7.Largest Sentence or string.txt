#include <iostream>
#include <cstring>
using namespace std;
//readn strings and print the largest strings,each strings can have 1000 char
int main() {
	int n;
    cin>>n;
    char sentence[1000];
     char largest[1000];
     int largest_len =0;

    while(n--){
    cin.getline(sentence,1000);
    //cout<<sentence<<endl;
    int len=strlen(sentence);
    if(len>largest_len){
        largest_len=len;
        strcpy(largest,sentence);
    }
}
cout<<"largest senetnce is"<< largest<<endl;
    return 0;
}

