#include <iostream>
#include <queue>
using namespace std;
/*
								15
							   /  \
							 10	   25
							/ \   /	 \
						   2  14 19   26
						    \    /
						     4  16
						         \
						         17

*/

struct node{
	int data;
	node* left;
	node* right;
};


node* getnewnode(int data){
	node* newnode=new node;
	newnode->data=data;
	newnode->left=NULL;
	newnode->right=NULL;
	return newnode;
}

node* insert(node* root, int data){
	if(root == NULL){
		root=getnewnode(data);
		
	}
	else if(data <=root->data){
		root->left=insert(root->left,data);
		
	}
	else{
		root->right=insert(root->right,data);
		
	}
	return root;
}
bool subtreelesser(node* root, int data){
	if(root==NULL) return true;
	if((root->data <= data) && subtreelesser(root->left,data) &&
		subtreelesser(root->right,data))
		return true;
	else
		return false;
}
bool subtreegreater(node* root, int data){
	if(root==NULL) return true;
	if((root->data > data) && subtreegreater(root->left,data) &&
		subtreegreater(root->right,data))
		return true;
	else return false;
}

bool IsBST(node* root){
	if(root==NULL) return true;
	if(IsBST(root->left) && IsBST(root->right) &&
		subtreegreater(root->right,root->data) && subtreelesser(root->left,root->data))
		return true;
	else
		return false;
}

int main(int argc, char const *argv[])
{
	node* root=NULL;
	root=getnewnode(15);
	root=insert(root,10);
	root=insert(root,25);
	root=insert(root,2);
	root=insert(root,19);
	root=insert(root,26);
	root=insert(root,4);
	root=insert(root,16);
	root=insert(root,14);
	root=insert(root,17);
	if(IsBST(root)==true) cout<<"It is a BST\n";
	else cout<<"It is not a BST\n";
	return 0;
}