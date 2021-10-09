#include<bits/stdc++.h>
#include<iostream>
#include<math.h>
using namespace std;
class Product{
private:
	int id; 
	char *name;
    int mrp; 
	int selling_price; 
public: 
//constructor
	Product(){
		cout<<"inside constructor";
	}
	Product(int id, char *n,int mrp, int selling_price){
		this->id=id;
		this->mrp=mrp;
		this->selling_price=selling_price;
		name=new char[strlen(n)+1];
		strcpy(name,n);
	}
//we need to define our own copy constructor only if an object has pointer
//to dynamically allocated object i.e. a deep copy of object is needed	
	//this is shallow copy
	Product(Product &X){
		id=X.id;
		name=new char [strlen(X.name)+1];
        strcpy(name,X.name);
		mrp=X.mrp;
		selling_price=X.selling_price;
	}
	
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
	void showDetails(){
		cout<<"Name : "<<name<<endl;
		cout<<"Id : "<<id<<endl;
		cout<<"MRP : "<<mrp<<endl;
		cout<<"Selling Price : "<<selling_price<<endl;
		cout<<"================"<<endl;
	}
	void setName(char *name){
		strcpy(this->name,name);
	}
};

int main() {
	//Product camera;
	Product camera(101,"gopro9",28000,26000);
	Product old_camera(101,"gopro9",28000,26000);
	 old_camera.setName("heromotorcam9");
     old_camera.setSellingPrice(1000);
	 old_camera.showDetails();
	 camera.showDetails();

	//camera.showDetails();

	//Product webcam(camera);

//	Poduct handyCam=camera;
	//handyCam.setMrp(1000);

	//camera.showDetails();
	//webcam.showDetails();
	//handyCam.showDetails();
	//camera.mrp=100;
	//camera.selling_price=200;
	//camera.setMrp(100);
	//camera.setSellingPrice(190);

	//<<sizeof(camera) <<endl;

	//cout<<"MRP "<<camera.getMrp() <<endl;
	//cout<<"SELLING PRICE "<<camera.getSellingPrice() <<endl;
	//return 0;
}

