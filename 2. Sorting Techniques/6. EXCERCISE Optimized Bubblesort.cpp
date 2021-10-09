
/*
In simple bubble sort algorithm, the time complexity will remain O(n^2) every time, even if the given array is already sorted.
Your task is to optimized the bubble sort such that its best case time complexity becomes O(n).
Input Format
In the function an integer vector is passed.
Output Format
Return an integer vector in non decreasing order.
Sample Input 
{1,3,5,7,9},x=2
Sample Output
{1,3,5,7,9}
Explanation
GIVEN VECTOR IS ALREADY SORTED
*/

#include<bits/stdc++.h>
using namespace std;

vector<int> optimizedBubbleSort(vector<int> arr){
    // your code  goes here
    int i, j, n=arr.size();
   bool swapped;
   for (i = 0; i < n-1; i++)
   {
     swapped = false;
     for (j = 0; j < n-i-1; j++)
     {
        if (arr[j] > arr[j+1])
        {
           swap(arr[j], arr[j+1]);
           swapped = true;
        }
     }
 
     // IF no two elements were swapped by inner loop, then break
     if (swapped == false)
        break;
   }
   
   return arr;
}