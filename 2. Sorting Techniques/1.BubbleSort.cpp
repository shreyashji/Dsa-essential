
#include <iostream>
using namespace std;
void bubble_sort(int a[],int n){
	for(int times=1; times<=n-1; times++){
		//repeated swapping
		//thius will go to n-2 index which is 2nd last index, n-1 is last
		for(int j=0;j<=n-times-1; j++)
		{
			if(a[j]>a[j+1])
			{
				swap(a[j], a[j+1]);

			}
		}
	}
}
int main() {
	// your code goes here
	int arr[]={-2,3,4,-1,5,-2,-12,6,3};
	int n= sizeof(arr)/sizeof(int);
	bubble_sort(arr,n);
	for (auto x: arr){
		cout<<x<<" ,";
	}

	return 0;
}
//tn=O(N^2)


#include <iostream>
using namespace std;
void bubble_sort(int a[],int n){
	for(int times=1; times<=n-1; times++){
		//repeated swapping
		//thius will go to n-2 index which is 2nd last index, n-1 is last
		for(int j=0;j<=n-times-1; j++)
		{
			if(a[j]>a[j+1])
			{
				swap(a[j], a[j+1]);

			}
		}
	}
}
int main() {
	// your code goes here
	int arr[]={-2,3,4,-1,5,-2,-12,6,3};
	int n= sizeof(arr)/sizeof(int);
	bubble_sort(arr,n);
	for (auto x: arr){
		cout<<x<<" ,";
	}

	return 0;
}
//tn=O(N^2)

