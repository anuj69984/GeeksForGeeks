#include <iostream>
using namespace std;

struct node{
	int data;
	node* next;
};

struct node* head1;
struct node* head2;

node* insertAtBeg(node* head,int x){
	node* temp=new node;
	temp->data=x;
	temp->next=head;
	head=temp;
	return head;
}

void reverseIterative(node* head){
	node* current=head;
	node*temp;
	node* prev=NULL;
	while(current != NULL){
		temp=current->next;
		current->next=prev;
		prev=current;
		current=temp;
	}
	head=prev;
}

void print(node* head){
	node* temp=head;
	cout<<"List is : ";
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}

int main(int argc, char const *argv[])
{
	head1=NULL;
	head2=NULL;

	head1=insertAtBeg(head1,100);
	head1=insertAtBeg(head1,80);
	head1=insertAtBeg(head1,70);
	print(head1);
	reverseIterative(head1);
	print(head1);
	return 0;
}