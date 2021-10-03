#include <iostream>
using namespace std;
int** create2Darray(int rows,int cols){
	int** arr = new int*[rows];
	//allocate memory for each row
	//creation part
	for(int i=0; i<rows; i++){
		arr[i]= new int[cols];
	}
	int value=0;
	// putting some value here
	for(int i=0;i<rows; i++){
		for(int j=0; j<cols; j++){
			arr[i][j]= value;
			value++;
		}
	}
	return arr;
}
int main() {
	//Dynamic array 
	int rows,cols;
	int **arr =create2Darray(rows, cols);
	for(int i=0; i<rows; i++){
		for(int j=0; j<cols; j++){
	cout<< arr[i][j]<<" ";
	}
	cout<<endl;
	}
	return 0;
}

