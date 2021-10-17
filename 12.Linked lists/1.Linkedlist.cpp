#include <iostream>
using namespace std;
//forward declaration
class List;

class Node{
	int data;    //private
//constructor
public:
	Node* next; //private		
	Node(int d):data(d),next(NULL){} //this is initilization list
	int getData(){
		return data;
	}
	friend class List;

};
class List{
	Node * head;
	Node * tail;
//constructor
public: 
	List():head(NULL),tail(NULL){}
	Node* begin(){
		return head;
	}
	//push front
	void push_front(int data){
		if(head==NULL){
			Node * n=new Node(data); //new = persist in the memory dynamic allocate
			head=tail=n;
			return;
		}
		else{
			Node * n=new Node(data);
			n->next=head;
			head=n;
		}
	}
	//push at end
	void push_back(int data){
		if(head==NULL){
			Node * n=new Node(data); //new = persist in the memory dynamic allocate
			head=tail=n;
		}
		else{
			Node * n=new Node(data);
			tail->next=n;
			tail=n;
		}
	}
	//inset at the middle of ll
	void insert(int data,int pos){
		if(pos==0){
			push_front(data);
			return;
		}
		Node* temp=head;
		for(int jump=1; jump<=pos-1;jump++){
			temp=temp->next;
		} 
		Node * n= new Node(data);
		n->next=temp->next;
		temp->next=n;
	}
};
bool search(node *head,int key){
	node*temp = head;
	while(temp!=NULL){
		if(head->data==key){
			return true;
		}
		head=headd->next;
	}
	return false;
}


int main() {
	List l;
	l.push_front(1);
	l.push_front(0);
	l.push_back(3);
	l.push_back(4);
	l.insert(2,2);
	l.insert(10,0);
	Node* head=l.begin();
	while(head!=NULL){
		cout<<head->getData()<<"->";
		head=head->next;
	}
	return 0;
}

