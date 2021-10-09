/*
Given a string, write a c function to check if it is palindrome or not. 
A string is said to be palindrome if reverse of the string is same as string. For example, “abba” is palindrome, but “abbc” is not palindrome.
Input Format
In the function a string is passed.
Output Format
Return true if it is palindrome else false.
Sample Input 
abcdcba
Sample Output
true
*/

//Expected Time Complexity : O(N)

#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string str)
{
    // Start from leftmost and rightmost corners of str
    int l = 0;
    int h = str.length() - 1;
    // Keep comparing characters while they are same
    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            return false;
        }
    }
    return true;
}