
#include <iostream>
using namespace std;
//class
class Product{
	//data members
	//private
	int id; //4
	char name[100]; //100
public: 
//public
	int mrp; //4
	int selling_price; //4 
};

int main() {
	Product camera;
	camera.mrp=100;
	camera.selling_price=200;
	cout<<sizeof(camera)<<endl;
	cout<<"MRP "<<camera.mrp<<endl;
	cout<<"SELLING PRICE "<<camera.selling_price<<endl;
	return 0;
}

