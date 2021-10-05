#include <iostream>
using namespace std;
//cant solve or larger value of n
bool canPlace(int board[][20],int n, int x,int y){
    for(int k=0; k<x; k++){
        if(board[k][y]==1){
            return false;
        }
    }
        //left diagonal
        int i=x;
        int j=y;
        while(i>=0 and j>=0){
             if(board[i][j]==1){
                return false;
             }
            i--,j--;
        }
        //right diagonal
        i=x;
        j=y;
        while(i>=0 and j<n){
             if(board[i][j]==1){
                return false;
            }
        i--,j++;
        } 
    return true;
}

void printboard(int n,int board[][20]){
    for(int i=0; i<n; i++){
        for(int j=0;j<n; j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

bool solveNqueen(int n, int board[][20], int i){
    //base case
    if(i==n){
        //print the board
        printboard(n,board);
        return true;
    }
    //rec case
    //try to place a queen in every row
    int ways=0;
    for(int j=0; j<n; j++){
        //wheather the current i,j is safe or not
        if(canPlace(board,n,i,j)){
            board[i][j]=1;
          ways += solveNqueen(n,board,i+1);
            //backtrack
             board[i][j]=0;
        }
    }
    return ways;
}

int main() {
	// your code goes here
    int board[20][20]={0};
    int n;
    cin>>n;
    cout<<"ways" <<solveNqueen(n,board,0);
	return 0;
}

  