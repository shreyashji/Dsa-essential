
/*
Given co-ordinates of N points on X-Y axis, your task is to sort them in accordance to 
the x-coordinate. If the x-coordinates are same then compare y-coordinates.
Input Format
In the function an integer vector of pairs is passed.
Output Format
Return the vector in sorted order. 
Sample Input 
{(3,4),(2,3),(3,7),(1,5),(3,4)}
Sample Output
{(1,5),(2,3),(3,4),(3,4),(3,7)}
*/

#include<bits/stdc++.h>
using namespace std;

vector<pair<int, int>> sortCartesian(vector<pair<int, int>> v)
{
    sort(v.begin(), v.end());
    return v;
}