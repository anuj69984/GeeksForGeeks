#include <iostream>
using namespace std;

struct node{
	int data;
	node* next;
};
struct node* head;

void reverse(){
	node* current=head;
	node* prev=NULL;
	node* temp;
	while(current!=NULL){
		temp=current->next;
		current->next=prev;
		prev=current;
		current=temp;
	}
	head=prev;
}

void reverseRecursive(node* P){
	if(P->next==NULL){
		head=P;
		return;
	}
	reverseRecursive(P->next);
	node* q=P->next;
	q->next=P;
	P->next=NULL;
}
void print(){
	if (head==NULL)
	{
		cout<<"List is Empty\n";
		return;
	}
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

int main(int argc, char const *argv[])
{
	head=NULL;
	insert(6);
	insert(5);
	insert(4);
	insert(3);
	insert(2);
	insert(1);
	print();
	reverse();
	print();
	reverseRecursive(head);
	print();

	return 0;
}