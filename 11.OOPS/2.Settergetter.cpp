 
#include <iostream>
using namespace std;
//class
class Product{
	//data members
private:
	int id; //4
	char name[100]; //100
    int mrp; //4
	int selling_price; //4 
public: 
//setters
	void setMrp(int price){
        mrp=price;
    }
    void setSellingPrice(int price){
		if(price>mrp){
			 selling_price=mrp;
		}
		else{
			selling_price=price;
		}
	}
	//getters returns some property of product
	int getMrp(){
		
       return mrp;
    }
    int getSellingPrice(){
        return selling_price;
    }
};

int main() {
	Product camera;
	//camera.mrp=100;
	//camera.selling_price=200;
	camera.setMrp(100);
	camera.setSellingPrice(190);

	cout<<sizeof(camera) <<endl;

	cout<<"MRP "<<camera.getMrp() <<endl;
	cout<<"SELLING PRICE "<<camera.getSellingPrice() <<endl;
	return 0;
}

