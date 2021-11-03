#include <iostream>
using namespace std;
//input 1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1
//output  1 2 4 5 7 3 6 
class Node{

public:
    int data;
    Node * left;
    Node * right;

    Node(int d){
        data=d;
        left=right=NULL;
    }
};

//FUNCTIONAL APPROACH
//preorder build of the tree Root,left,right 
Node* buildtree(){
    int d;
    cin>>d;

    if(d==-1){
        return NULL;
    }
    Node *n = new Node(d);
    n->left= buildtree();
    n->right= buildtree();
    return n;
}
//preorder
void printpreorder(Node * root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    printpreorder(root->left);
    printpreorder(root->right);

}
//inorder left, root,right
void printInorder(Node * root){
     if(root==NULL){
        return;
    }
    printInorder(root->left);
    cout<<root->data<<" ";
    printInorder(root->right);
}
//postorder left,right, root (bottomup) using this in problems alot
void printPostorder(Node * root){
     if(root==NULL){
        return;
    }
    printPostorder(root->left);
    printPostorder(root->right);
    cout<<root->data<<" ";
}
int main() {
	// your code goes here
    Node * root=buildtree();
    printpreorder(root);
    cout<<endl;
    printInorder(root);
    cout<<endl;
    printPostorder(root);
    cout<<endl;
	return 0;
}

