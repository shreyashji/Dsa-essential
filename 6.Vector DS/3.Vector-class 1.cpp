#include <iostream>
#include <vector>
using namespace std;
class Vector{
	//data member
	int *arr;
	int cs; //current size
	int ms; 	//max size
	public:
	Vector(int max_size=1){
		cs=0;
		ms=max_size;
		arr= new int[ms];
	}
	//method
	void push_back(const int d){
		//two cases
		if(cs==ms){
			//create new array & delt the old one,double the capacity
			int *oldArr=arr;
			ms=2*ms;
			arr=new int[ms];
			//copy the elements
			for(int i=0; i<cs; i++){
				arr[i]= oldArr[i];
			}
			//delet the old 
			delete [] oldArr;
		}
		arr[cs]=d;
		cs++;
	}
	//pop_back funcationality
	void push_back(){
		if(cs>0){
			cs--;
		}
	}

	bool isEmpty(){
		return cs=0;
	}

	//front,back,at funcationality,operator overloading
	int front() const {
		return arr[0];
	}

	int back() const {
		return arr[cs-1];
	}

	int at(int i) const {
		return arr[i];
	}

	int size() const{
		return cs;
	}

	int capacity() const {
		return ms;
	}

	//operator overloading
	int operator[] (const int i) const {
		return arr[i];
	}
};
int main() {
	Vector v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	v.push_back(15);
	v.push_back(6);

	cout<<v.front()<<endl; 
	cout<<v.back()<<endl;

	cout<<v.at(2)<<endl;  //3

	cout<<v.size()<<endl; //5
    cout<<v.capacity()<<endl; //8 
	for(int i=0; i <v.size(); i++){
		cout<<v[i]<<",";
	}
	return 0;
}

