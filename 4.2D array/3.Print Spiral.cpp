#include <iostream>
using namespace std;
void print(int arr[][10],int n, int m){
	int startRow=0;
	int endRow=n-1;
	int startCol=0;
	int endCol= m-1;
	//outerloop traverse whole boundary
	while(startCol<= endCol and startRow<= endRow){
		//start row
		for(int col=startCol ; col<=startCol; col++){
			cout<<arr[startRow][col]<<" ";
		}
		//end col
		for(int row=endRow; row<=endRow; row++){
			cout<<arr[row][endCol]<<" ";
		}
		//End row
		for(int col=endCol-1; col>=startCol; col++){
			if(startRow==endRow){
				break;
			}
			cout<<arr[endRow][col]<<" ";
		}
		//startcol
		for(int row=endRow; row>=startRow; row--){
			if(startCol==endCol){
				break;
			}
			cout<<arr[row][startCol]<<" ";
		}
		//update the variable  to inner spiral
	startRow++;
	endRow--;
	startCol++;
	endCol--;
	}
}
int main() {
	int arr[][10]= { {1,2,3,4},
					{12,13,14,15},
					{11,16,15,6},
					{10,9,8,7}};
	int n=4,m=4;
	print(arr,n,m);
	return 0;
}

