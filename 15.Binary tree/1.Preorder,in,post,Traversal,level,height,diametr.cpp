#include <bits/stdc++.h>
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
// IMPLEMENT LEVEL ORDER TRAVERSAL
/* EXPECTED OUTPUT
1
2 3
4 5 6
7
*/
void levelorderprint(Node * root){
	queue<Node*> q;

	q.push(root);
	q.push(NULL);
	while(!q.empty()){
		Node* temp=q.front();
		if(temp==NULL){
			cout<<endl;
			q.pop();
			//insert a new nulll for next level
			if(!q.empty()){
				q.push(NULL);
			}
		}
		else{
			q.pop();
			cout<<temp->data<<" ";
			if(temp->left){
				q.push(temp->left);
			}
			if(temp->right){
				q.push(temp->right);
			}
		}
	}
	return;
}
//o(n) height 
int height(Node*root){
	if(root==NULL){
		return 0;
	}
	int h1=height(root->left);
	int h2=height(root->right);
	return 1+max(h1,h2);
}
//
int diameter(Node*root){
	//base case
	if(root==NULL){
		return 0;
	}
	//rec case
	int D1=height(root->left)+height(root->right);
	int D2=diameter(root->left);
	int D3=diameter(root->right);
	return max(D1,max(D2,D3));
}
//optimized diameter 
//O(N) height & diameter in bottomup manner
class HDPair{
public:
	int height;
	int diameter;
};
HDPair optiDiameter(Node*root){
	HDPair p;
	if(root==NULL){
		p.height=p.diameter=0;
		return p;
	}
	//otherwise
	HDPair left=optiDiameter(root->left);
	HDPair right=optiDiameter(root->right);

	p.height=max(left.height,right.height)+1;
	int D1=left.height+right.height;
	int D2=left.diameter;
	int D3=right.diameter;

	p.diameter=max(D1,max(D2,D3));
	return p;
}

int main() {
	// your code goes here
    Node * root=buildtree();
/*   printpreorder(root);
    cout<<endl;
    printInorder(root);
    cout<<endl;
    printPostorder(root);
    cout<<endl;
	*/
	levelorderprint(root);
	cout<<"diameter is : "<<diameter(root)<<endl;
	cout<<"optimized diameter is : "<<optiDiameter(root).diameter<<endl;
	return 0;
}

