 /*
Given two strings A and B. Check if one string is palindrome of the other.
A Permutation of a string is another string that contains same characters, only the order 
of characters can be different. For example, “abcd” and “dabc” are Permutation of each other.

constant extra space.
Input Format
In the function two strings passed.
Output Format
Return true if B is permutation of A else false.
Sample Input 
string A="test" ,B="ttew"
Sample Output
No
*/

//Expected Time Complexity= O(N log N)
//Hint: Permuatations are just different arrangements of same alphabets. Can you make the arrangement same?

#include <iostream>
using namespace std;

bool arePermutation(string str1, string str2)
{
    // Get lenghts of both strings
    int n1 = str1.length();
    int n2 = str2.length();
 
    // If length of both strings is not same,
    // then they cannot be Permutation
    if (n1 != n2)
      return false;
 
    // Sort both strings
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
 
    // Compare sorted strings
    for (int i = 0; i < n1;  i++)
       if (str1[i] != str2[i])
         return false;
 
    return true;
}