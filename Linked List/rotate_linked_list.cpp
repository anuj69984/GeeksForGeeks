#include <iostream>
using namespace std;

struct node{
	int data;
	node* next;
};

struct node* head;

int findLength(){
	if (head==NULL)
	{
		return 0;
	}
	else{
		node* temp=head;
		int cnt=0;
		while(temp!=NULL){
			cnt++;
			temp=temp->next;
		}
	return cnt;
	}
}
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
void rotate(int k){
	int size=findLength();
	if(k>size){
		cout<<"Invalid k \n";
		return;
	}
	else if(k==size){
		return;
	}
	else{
		node* temp=head;
		for(int i=1;i<k;i++){
			temp=temp->next;

		}
		node* temp1=temp->next;
		node* temp2=temp1;
		for(int j=k+1;j<size;j++){
			temp2=temp2->next;
		}
		temp2->next=head;
		head=temp1;
		temp->next=NULL;
	}
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
	insert(7);
	insert(6);
	insert(5);
	insert(4);
	insert(3);
	insert(2);
	insert(1);
	print();
	cout<<"size of linked list is : "<<findLength()<<endl;
	rotate(4);
	//reverse();
	print();

	return 0;
}
