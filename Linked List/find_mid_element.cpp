#include <iostream>
using namespace std;

struct node{
	int data;
	node* next;
};
struct node* head;

int count(){
	int cnt=0;
	if (head==NULL)
	{
		return -1;
	}	
	else{
		node* temp=head;
		while(temp!=NULL){
			cnt++;
			temp=temp->next;
		}
		return cnt;
	}
}

int FindMid(node* head){
	node* temp=head;
	int cnt=count();
	cout<<cnt<<endl;
	if(head ==NULL)
		return 0;
	else{
		for (int i = 0; i < cnt/2; ++i)
		{
			temp=temp->next;
		}
		return temp->data;
	}
}
void Insert(int data){
	node* newnode=new node;
	newnode->data=data;
	newnode->next=head;
	head=newnode;
}
void print(){
	if(head==NULL)
		cout<<"List is empty\n";
	else{
		cout<<"List is : ";
		node* temp=head;
		while(temp!=NULL){
			cout<<temp->data<<" ";
			temp=temp->next;
		}
		cout<<endl;
	}
}

int main(int argc, char const *argv[])
{
	head=NULL;
	Insert(6);
	Insert(5);
	Insert(4);
	Insert(3);
	Insert(2);
	Insert(1);
	print();
	cout<<"Middle element is : "<<FindMid(head)<<endl;

	return 0;
}