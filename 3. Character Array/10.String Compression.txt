 /*
Given an array of characters chars , , compress it using the following algorithm: 
Begin with an empty string  s ,. For each group of consecutive repeating characters in chars
If the group's length is 1, append the character to s.
Otherwise, append the character followed by the group's length.
The compressed string s should not be returned separately
, but instead be stored in the input character array chars. Note that group lengths that 
are 10 or longer will be split into multiple characters in chars
After you are done modifying the input array, return  the new length of the array
You must write an algorithm that uses only constant extra space.
Input Format
In the function a vector of characters is passed.
Output Format
Return the updated vector
Sample Input 

Sample Output

*/

//Expected Time Complexity : linear
/*




*/

#include <iostream>
using namespace std;

string compressString(string str)
{
int n=str.length();
string output;
for(int i=0;i<n;i++){
	int count=1;
	while(i<n-1 and str[i+1] == str[i]){
		count++;
		i++;
		}
	output += str[i];
	output += to_string(count);
	}
	if(output.length() > str.length()){
	return str;
	}
return output;
}

int main() {
string s1="aabbccddee";
cout<<compressString(s1)<<endl;
string s2="abcd";
cout<<compressString(s2)<<endl;

	return 0;
}

