#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include "datamodel.h"
using namespace std;

vector<Product> allProducts={
    Product(1,"apple",26),
    Product(2,"mango",16),
    Product(3,"watermalon",36),
    Product(4,"orange",56),
    Product(5,"pineapple",20),
    Product(6,"strawberry",80),
};

Product* chooseProduct(){

	//Display the list of products
	string productList;
	cout<<"Available Products "<<endl;

	for(auto product : allProducts){
		productList.append(product.getDisplayName());
	}
	cout << productList <<endl;

	cout<<"----------------"<<endl;
	string choice;
	cin>>choice;

	for(int i=0; i< allProducts.size(); i++){
		if(allProducts[i].getShortName()==choice){
			return &allProducts[i];
		}
	}
	cout<<"Product not found!" <<endl;
	return NULL;
}

bool checkout(Cart &cart){
	if(cart.isEmpty()){
		return false;
	}

	int total = cart.getTotal();
	cout<<"Pay in Cash";

	int paid;
	cin>>paid;

	if(paid>=total){
		cout<<"Change " <<paid - total << endl;
		cout<<"Thank you for shopping!";
		return true;
	}

	else{
		cout<<"Not enough cash!";
		return false;
	}
}

int main(){
/*
    Product p(1,"apple",26);
    cout<<p.getDisplayName();
    Item fruit(p,3);
    cout<<fruit.getItemInfo();
*/

char action;
Cart cart;
while(true){
    cout<<"Select an action- (a)dd item, (v)iew cart, (c)heckout "<<endl;
    cin>>action;
    if(action=='a'){
        //Todo: Add to Cart
        //view all products + choose product + add to the cart
        Product * product = chooseProduct();
			if(product!=NULL){
				cout<<"Added to the Cart "<<product->getDisplayName()<<endl;
				cart.addProduct(*product);
			}
    }
    else if(action=='v'){
        //view the cart
        cout<<"------------------" <<endl;
		cout << cart.viewCart();
		cout<<"------------------"<<endl;

    }
    else{
        //checkout
        cart.viewCart();
			if(checkout(cart)){
				break;
			}
    }
}


    return 0;
}