#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long int

const ll mod=1e9+7;
#define take_input freopen("input.txt","r",stdin),freopen("output.txt","w",stdout);
#define fast ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);

class linked_list{
public:
 		ll data;
		linked_list *next; // pointer
		linked_list() //constructor
		{
			this->next=NULL;
		}
		linked_list(ll data) //constructor if want to fill data
		{
			this->data=data;
			this->next=NULL;
		}
		linked_list *add(ll data,linked_list *head) //pass by value
		{	//case 1
			if(head==NULL){
				//make new ll and pass data and mark this as starting position
				linked_list *temp= new linked_list(data);
				head=temp;
			}
			else
			{
				//case 1 take temp pointer & start with head need to look for ending node
				//1->2->null
				//1->2->3->null
					linked_list *temp=head;
					while(temp->next!=NULL)
					temp=temp->next; // traverse for ending node
					temp->next= new linked_list(data);
			}
			return head;  //pass by value so nned to specify return type
		}
		void print(linked_list *head)
		{
			auto temp=head;
			while(temp!=NULL)
			{
				cout<<temp->data<<" ";
				temp=temp->next;
			}
			cout<<endl;
		}
		//how to find middle element of the linked list simple ll
		ll middle_element(linked_list *head)
		{
			auto sp=head,fp=head;
			while(fp!=NULL & fp->next!=NULL)
			{
				sp=sp->next;
				fp=fp->next->next;
			}
			return sp->data;
		}
	//delete middle of the linked list
		linked_list *delete_middle(linked_list *head){
			auto sp=head,fp=head;
			auto pre=sp;
			while(fp!=NULL & fp->next!=NULL)
			{
				sp=sp->next;
				fp=fp->next->next;
			}
		// 1-> 2  ->  3   ->4->5->
        //    pre     sp
		//1-> 2->4->5->
		pre->next=sp->next;
		delete sp;
		return head;
		}
	//delete whole linked list
		linked_list *delete_linked_list(linked_list *head){
			auto pre=head;
			head=head->next; //moving head to next
			if(head==NULL) //corner case
	    	{
			delete pre;
		    }
			while(head!=NULL)
			{
				delete pre;
				pre=head;  //pre is  before head
				head=head->next;		
			}
			return head;
		}
	// recursively print reverse
	//without reversing the linked list , we can PRINT(ONLY) the linked list in reverse
	//WITHOUT STACK ,using inbuilt stack of recursion
	//we are not going to use stack 
	//backtrack ,moving head in last then backtrack
	void print_reverse(auto head)
	{
		if(head==NULL)
			return;
		print_reverse(head->next); //recrsive step take head to last, it touch null then it will print
		cout<<head->data<<" ";
	}
	//reversing a linked list
	// 1 ->  2  ->NULL
	//PRE   CURR
	//curr->next=pre
	// 2->1->NULL
	// 1 <-  2     3  -> NULL
	//PRE   CURR   next
	// 1 <-  2  <-  3  -> NULL
	//      PRE    CURR    next
	auto reverse_linked_list(auto head) //auto recognize datatype itself (head is of Linked list type)
	{
		linked_list *cur=head, *next=head, *pre=NULL;
		//           1  ->  2  ->  3  ->  4  ->   NULL
        //   pre     c       n     
		while(cur)
		{
			next=cur->next;
			// 1      2  ->  3  ->  4  ->   NULL
            // p      c      n 
			//1    <-  2  <-  3  <-  4    NULL
            //		                  p     c     n     
			cur->next=pre;
			pre=cur;
			cur=next;
		}
		return pre; //means head position is pre
	}
	//palindrome linked list
	bool is_palindrome(auto &left,auto right) //pass by refrence & value
	{
		if(right==NULL)
			return true; //if no value then its true
		bool first= is_palindrome(left, right->next); //make right to null,this is recursion
		if(first==false)
			return false;
		bool second=(right->data==left->data);
		left=left->next;
		return second;
	}
	//delete duplicates from linked list (sorted) O(n)
	//1->2->2->2->1
	//c  n
	//1->2
	auto remove_duplicate_sorted(auto head)
	{
		auto cur=head;
		while(cur->next!=NULL)
		{
			if(cur->data==cur->next->data)
			{
				auto temp= cur->next;
				cur->next=temp->next;
				delete temp;
			}
			else
			cur=cur->next;
		}
		return head;
	}
	//for unsorted list
	auto remove_duplicate_unsorted(auto head)
	{    //hashing
		set<ll> vis;
		auto cur=head,pre=cur;
		while(cur)
		{
			if(vis.count(cur->data))
			{
				pre->next=cur->next;
				delete cur;
			}
			else
			{
				vis.insert(cur->data);
				pre=cur;
			}
			cur=pre->next;
		}
		return head;
	}

	//detect loop in linked list
	//slow pointer ,fast pointer
	bool detect_loop(auto head)
	{
		auto sp=head,fp=head;
		while(fp and fp->next)
		{
			sp=sp->next;
			fp=fp->next->next;
			if(sp==fp)
				return true;
		}
		return false;
	}
	//REMOVE LOOP
	auto remove_loop(auto head)
	{
		auto sp=head,fp=head;
		while(fp and fp->next)
		{
			sp=sp->next;
			fp=fp->next->next;
			if(sp==fp)
				break;
		}
		if(sp==fp)
		{
			sp=head;
			while(sp->next!=fp->next)
			{
				sp=sp->next;
				fp=fp->next;
			}
			fp->next=NULL;
		}
		return head;
	}
	
	//intersection without hashing and without taking extra space
	ll intersection_point(auto head1,auto head2)
	{
		auto cur1=head1,cur2=head2;
		while(cur1!=cur2)
		{
			if(cur1==NULL)
				cur1=head2;
			else
				cur1=cur1->next;
			if(cur2==NULL)
				cur2=head1;
			else
				cur2=cur2->next;
		}
		return cur1->data;
	}
	//odd even 
	//1   ->  2->   3  ->  4   -> 5
	//odd    even
	//1->3->5
	//2->4
	//135246
	auto odd_even(auto head)
	{
		auto o=head,e=head->next,temp=e;
		while(e!=NULL and e->next!=NULL)
		{
			o->next=e->next;
			o=o->next;
			e->next=o->next;
			e=e->next;
		}
		o->next=temp;
		return head;
	}
	//merge h1,h2
    auto merge(auto h1,auto h2)
	{
		if(h1==NULL or h2==NULL)
		{
			return (h1==NULL)?h2:h1;
		}
		if(h1->data<h2->data)
		{
			h1->next=merge(h1->next,h2);
			return h1;
		}
		else
		{
			h2->next=merge(h1,h2->next);
			return h2;
		}

	}
    //merge sort on ll
    //1   ->  3->   6   ->  2 -> 7
    //      pre    slowp 
    //1  ->  3 ->NULL     h1
    //6  -> 2 -> 7-> NULL  h2
    
    auto mergesort(auto head)
	{
		if(head==NULL or head->next==NULL)
			return head;
		auto sp=head,fp=head,pre=sp;
		while(fp and fp->next)
		{
			pre=sp;
			sp=sp->next;
			fp=fp->next->next;
		}
		pre->next=NULL;
		auto h1=mergesort(head);
		auto h2=mergesort(sp);
		return merge(h1,h2);
	}
};
int main() {
	fast;
	// your code goes here
/*	linked_list *head=NULL;
	head=head->add(1,head);
	head=head->add(2,head);
	head=head->add(3,head);
	head=head->add(4,head);
	head=head->add(5,head); 
	*/
	//head=head->add(6,head); 
	//head->print(head);
	//cout<<head->middle_element(head)<<endl;
	//head=head->delete_middle(head);
	///head->print(head);
/*	if(head!=NULL)
		head->print(head);
	else
		cout<<"list is empty";
	head=head->delete_linked_list(head);
	if(head!=NULL)
		head->print(head);
	else
		cout<<"list is empty";
*/
/*
    head=head->reverse_linked_list(head);
	head->print(head);
	*/
   //cout<<head->is_palindrome(head,head);
	/* head=head->remove_duplicate_sorted(head);
	head->print(head);
    */
  /* head=head-> remove_duplicate_unsorted(head);
	head->print(head);
	*/
/*	auto cur=head,temp=head;
	while(cur->next)
	{
		cur=cur->next;
	}
	while(temp->data!=2)
		temp=temp->next;
		cur->next=temp;
	cout<<head->detect_loop(head);
			head=head->remove_loop(head);
	cout<<head->detect_loop(head);
	*/
/*	//intersection_point
	linked_list *head1=NULL,*head2=NULL;
	head1=head1->add(1,head1);
	head1=head1->add(2,head1);
	head1=head1->add(3,head1);
	head1=head1->add(4,head1);
	head1=head1->add(5,head1); 
	head1=head1->add(6,head1); 
 	//ll 2 for intersection_point
	head2=head2->add(8,head2);
	head2=head2->add(6,head2);
	
    auto cur=head2, temp=head1;
    while(cur)
        cur=cur->next;
    while(temp->data!=4)
        temp=temp->next;
    cur->next=temp;
    cout<<head1->intersection_point(head1,head2)<<endl;
    */
   // head1=head1->odd_even(head1);
    //head1->print(head1);
    linked_list *head1=NULL,*head2=NULL;
	head1=head1->add(6,head1);
	head1=head1->add(2,head1);
	head1=head1->add(5,head1);
	head1=head1->add(4,head1);
	head1=head1->add(5,head1); 
	head1=head1->add(1,head1); 
    
     head1=head1->mergesort(head1);
    head1->print(head1);
}

