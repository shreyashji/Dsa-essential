#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Node{
public:
int key;
Node *left;
Node *right;

    Node(int key){
        this->key=key;
        left=right=NULL;
    }
};

Node* insert(Node *root,int key){
    if(root==NULL){
        return new Node(key);
    }
    //rec case
    if(key < root->key){
        root->left=insert(root->left,key);
    }
    else{
         root->right=insert(root->right,key);
    }
    return root;
}

void PrintInorder(Node *root){
     if(root==NULL){
        return ;
    }
    PrintInorder(root->left);
    cout<<root->key<<" ,";
    PrintInorder(root->right);
}

//o(H) hl lies btween logn and n
//binary tree wil take linear time this will take o(H) time
bool search(Node *root,int key){
    if(root==NULL){
        return false;
    }
    //rec case
    if(root->key==key){
        return true;
    }
   if(key<root->key){
       return search(root->left,key);
   }
   return search(root->right,key);
}
Node* findMin(Node *root){
    while(root->left!=NULL){
        root=root->left;
    }
    return root;
}
Node* remove(Node *root,int key){
    //search here start,no delt here
       if(root==NULL){
        return NULL;
    }
    else if(key< root->key){
        root->left= remove(root->left,key);
    }
    else if(key>root->key){
         root->right= remove(root->right,key);
    } //searching only ,end, no delt here 

    else{
        //when current node matched with key
        //case 1 no children
        if(root->left==NULL && root->right==NULL){
            delete(root);
            root=NULL;
           
        }
        //single child
        else if(root->left==NULL){
            Node *temp=root;
            root=root->right;
            delete temp;
        }
         else if(root->right==NULL){
            Node *temp=root;
            root=root->left;
            delete temp;
        }
        //with 2 children
        else{
             Node *temp=findMin(root->right);
             root->key=temp->key;
             root->right=remove(root->right,temp->key);
        }
       
    }
     return root;
}

void printRange(Node* root,int k1,int k2){
	if(root==NULL){
		return;
	}
	if(root->key>=k1 and root->key<=2){
		//call on both sides
		printRange(root->left,k1,k2);
		cout<<root->key<<" ";
		printRange(root->right,k1,k2);
	}
	else if(root->key>k2){
		printRange(root->left,k1,k2);
	}
	else{
		//root->key<k1
		printRange(root->right,k1,k2);
	}
}
void print2leafpath(Node* root,vector<int> &path){
	if(root==NULL){
		return;
	}
	if(root->left==NULL and root->right==NULL){
		//print the vector
		for(int Node:path){
			cout<<Node<<"->";
		}
		
		cout<<root->key<<" ";
		cout<<endl;
		return;
	}
	//rec case
	path.push_back(root->key);
	print2leafpath(root->left,path);
	print2leafpath(root->right,path);
	//backtracking
	path.pop_back();
	return;
}


int main() {
    Node *  root =NULL;
    int arr[]= {8,3,10,1,6,14,4,7,13};

    for(int x:arr){
        root=insert(root,x);
    }
    PrintInorder(root);
  //  int key;
	//cout<<"Range is "<<endl;
	
	printRange(root,5,12);
	vector<int> path;
	print2leafpath(root,path);
   // cin>>key;
   // root=remove(root,key);
   // cout<<search(root,key)<<endl;
   // PrintInorder(root);
}

