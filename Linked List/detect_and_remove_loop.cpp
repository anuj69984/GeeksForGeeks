#include <iostream>
using namespace std;
struct node{
	int data;
	node* next;
};
struct node* head;
void print(){
	node* temp=head;
	cout<<"List is : ";
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}
void insert(int data){
	node* newnode=new node;
	newnode->data=data;
	newnode->next=head;
	head=newnode;
}


/*
void removeLoop(node* head){
	node* p=head;
	node* q=head;
	node* temp;
	node* next=NULL;
	node* prev=NULL;
	while(p!=NULL && q!=NULL && q->next!=NULL){
		p=p->next;
		q=q->next->next;
		if(p==q){
			//cout<<"Loop is found\n";
			temp=p;
			return temp;
		}
	}
	p=head;
	while(p!=q){
		p=p->next;
		q=temp->next;
		
	}
	temp=q;
	temp->next=NULL;

}
*/



void Isloop(node* head){
	node* p=head;
	node* q=head;
	while(p!=NULL && q!=NULL && q->next!=NULL){
		p=p->next;
		q=q->next->next;
		if(p == q){
			cout<<"Loop is detected\n";
			return;
		}
	}
	cout<<"Loop is Not detected\n";
}

/*


node* startOfLoop(node* p, node* head){
	node* q=head;
	while(p!=q){
		q=q->next;
		p=p->next;
	}
	return p;
}

void insertAtEnd(int x){
	if (head == NULL)
	{
		insert(x);
	}
	else{
		node* temp=head;
		while(temp->next !=NULL){
			temp=temp->next;
		}
		node* temp1=new node;
		temp1->data=x;
		temp1->next=NULL;
		temp->next=temp1;
	}
}


*/
node* getnewnode(int data){
	node* newnode=new node;
	newnode->data=data;
	newnode->next=NULL;
	return newnode;
}
node* detectloop(node* head){
	node* p=head;
	node* q=head;
	while(p!=NULL && q!=NULL & q->next!=NULL){
		p=p->next;
		q=q->next->next;
		if(p == q){
			return p;
		}
	}
	return NULL;
}
void Removeloop(node* p){
	node* q=p;
	node* temp=q;
	p=head;
	while(p!=q){
		p=p->next;
		q=temp->next;
		
	}
	temp=q;
	temp->next=NULL;
}
int main(int argc, char const *argv[])
{
	head=NULL;

	head=getnewnode(4);
	head->next=getnewnode(5);
	head->next->next=getnewnode(6);
	node* temp=head->next->next;
	head->next->next->next=getnewnode(7);
	head->next->next->next->next=getnewnode(8);
	head->next->next->next->next->next=getnewnode(9);
	head->next->next->next->next->next->next=temp;

	node* ptr=detectloop(head);
	Isloop(head);
	Removeloop(ptr);
	Isloop(head);
	print();
	// insertAtEnd(8);
	// insertAtEnd(7);
	// insert(6);
	// insert(5);
	// insert(4);
	// insert(3);
	
	// Isloop(head);
	// removeLoop(head);
	// Isloop(head);
	// print();
	// //cout<<temp<<endl;
	return 0;
}