#include <iostream>
using namespace std;

struct node{
	int data;
	node* next;
};
struct node* head;
void insertAtBeg(int x){
	node* temp=new node;
	temp->data=x;
	temp->next=head;
	head=temp;
}
void print(){
	node* temp=head;
	cout<<"List is : ";
	while(temp != NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}
int count(){
	node* temp=head;
	int cnt=0;
	if(head==NULL)
		return 0;
	else{
		while(temp!=NULL){
			cnt++;
			temp=temp->next;
		}
		return cnt;
	}
}

int nthNodefromEnd(int n){
	int size=count();
	if(n>size) return -1;
	node* temp=head;
	for (int i = 0; i < size-n; ++i)
	{
		temp=temp->next;
	}
	return temp->data;
}
int main(int argc, char const *argv[])
{
	insertAtBeg(7);
	insertAtBeg(6);
	insertAtBeg(5);
	insertAtBeg(4);
	insertAtBeg(3);
	insertAtBeg(2);
	insertAtBeg(1);
	print();
	int n;
	cout<<"Enter the value of n : ";
	cin>>n;
	cout<<n<<"th node from End is : "<<nthNodefromEnd(n)<<endl;
	return 0;
}