  
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Product{

private:
	int id; //4
	char name[100]; //100
    int mrp; //4
	int selling_price; //4 
public: 

//constructor
	Product(){
		//cout<<"inside constructor";
	}
	Product(int id, char *n,int mrp, int selling_price){
		this->id=id;
		this->mrp=mrp;
		this->selling_price=selling_price;
		strcpy(name,n);
	}
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
	void showDetails(){
		cout<<"Name : "<<name<<end;
		cout<<"Id : "<<id<<end;
		cout<<"Selling Price : "<<selling_price<<end;
		cout<<"MRP : "<<mrp<<end;
	}
};

int main() {
	//Product camera;
	Product camera(101,"gopro9",28000,26000);//parametrized constructor
	camera.showDetails();

	Product webcam(camera);
	camera.
	//camera.mrp=100;
	//camera.selling_price=200;
	camera.setMrp(100);
	camera.setSellingPrice(190);

	cout<<sizeof(camera) <<endl;

	cout<<"MRP "<<camera.getMrp() <<endl;
	cout<<"SELLING PRICE "<<camera.getSellingPrice() <<endl;
	return 0;
}

