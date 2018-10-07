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

void rightview(node* root){
	if(root==NULL) return;
	queue <node*> Q;
	Q.push(root);
	node* current=NULL;
	while(!Q.empty()){
		int i=0;
		int size=Q.size();
		while(i++ < size){
			current=Q.front();
			Q.pop();

			if(i==size)
				cout<<current->data<<" ";
			if(current->left)
				Q.push(current->left);
			if(current->right)
				Q.push(current->right);
		}
	}
}

void rightviewUtil(node* root, int level, int &maxlevel){
	if(root==NULL) return;
	if(maxlevel < level){
		cout<<root->data<<" ";
		maxlevel=level;
	}
	rightviewUtil(root->right,level+1,maxlevel);
	rightviewUtil(root->left,level+1,maxlevel);
}

void rightviewGfg(node* root){
	int maxlevel=0;
	rightviewUtil(root,1,maxlevel);
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
	cout<<"Right View of Binary Tree : ";
	rightview(root);
	cout<<endl;
	cout<<"Right View of Binary Tree : ";
	rightviewGfg(root);
	cout<<endl;

	return 0;
}