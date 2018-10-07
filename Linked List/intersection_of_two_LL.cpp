#include <iostream>
using namespace std;

struct node{
	int data;
	node* next;
};
struct node* head1;
struct node* head2;

int findlength(node* head){
	if(head==NULL) return 0;
	node* temp=head;
	int cnt=0;
	while(temp!=NULL){
		cnt++;
		temp=temp->next;
	}
	return cnt;
}
int intersection(node* head1,node* head2){
	node* temp1=head1;
	node* temp2=head2;
	int l1=findlength(head1);
	int l2=findlength(head2);
	int d=0;
	if(l1>=l2)
		d=(l1-l2);
	else
		d=(l2-l1);
	if(l1>l2){
		for(int i=0;i<d;i++){
			temp1=temp1->next;
		}
	}
	else{
		for(int i=0;i<d;i++){
			temp2=temp2->next;
		}
	}
	while(temp1!=temp2){
		temp1=temp1->next;
		temp2=temp2->next;
	}
	return temp1->data;
}

void print(node* head){
	node* temp=head;
	cout<<"List is : ";
	while(temp != NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}
node* insertAtBeg(node* head,int x){
	node* temp=new node;
	temp->data=x;
	temp->next=head;
	head=temp;
	return head;
}
int main(int argc, char const *argv[])
{
	head1=NULL;
	head2=NULL;
	head1=insertAtBeg(head1,100);
	head1=insertAtBeg(head1,80);
	head1=insertAtBeg(head1,70);
	node* temp1=head1;
	head1=insertAtBeg(head1,50);
	head1=insertAtBeg(head1,10);
	head2=insertAtBeg(head2,60);
	head2=insertAtBeg(head2,40);
	head2->next=temp1;
	head2=insertAtBeg(head2,30);
	head2=insertAtBeg(head2,20);
	print(head1);
	print(head2);
	//node* newnode=intersection(head1,head2);

	cout<<"intersection of two linked list is : "<<intersection(head1,head2)<<endl;

	//cout<<method2(head1,head2)<<endl;
	return 0;
}