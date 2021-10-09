#include <iostream>
using namespace std;
//half done only not full code
int main() {
	// your code goes here
    char route[1000];
    cin.getline(route,3000);
    int x=0;
    int y=0;
    for(int i=0; route[i]!='\0'; i++)
    {
        switch(route[i]){
            case'N' :y++;
            break;
            case'S' :y--;
            break;
            case'E' :x++;
            break;
            case'W' :x--;
            break;
        }
    }
    cout<<"the final x and y is "<<x<<","<<y<<".";
    if(x>0 && y>=0){
        while(x--){
            cout<<"E";
        }
        while(y--){
            cout<<"N";
        }  
        while(x--){
            cout<<"W";
        }  
        while(y--){
            cout<<"S";
        }  
    }
	return 0;
}

