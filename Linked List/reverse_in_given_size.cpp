#include <iostream>
using namespace std;
struct node{
	int data;
	node* next;
};
struct node* head;
node* reverse(node* head,int k){
	node* current=head;
	node* next=NULL;
	node* prev=NULL;
	int count=0;
	while(current!=0 && count<k){
		next=current->next;
		current->next=prev;
		prev=current;
		current=next;
		count++;
	}
	if(next!=NULL){
		head->next=reverse(next,k);
	}
	return prev;
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
	insert(8);
	insert(7);
	insert(6);
	insert(5);
	insert(4);
	insert(3);
	insert(2);
	insert(1);
	print();
	head=reverse(head,3);
	print();
	return 0;
}