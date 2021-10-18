#include <iostream>
using namespace std;
void reverse (node *&head){
	node *C=head;
	node *P=NULL;
	node *N;
	while(C!=NULL){
		//save the next node
		N=C->next;
		//make the current node point to previous
		C->next=P;
		//update p & c take them 1 step forward
		P=C;
		C=N;
	}
	head=P;

}

int main() {
	// reverse linked list swapping is bad idea coz its expensive
	node *head;
	cin>>head;
	cout<<head;
	reverse(head);
	cout<<head;
	return 0;
}

