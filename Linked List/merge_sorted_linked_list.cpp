#include <iostream>
using namespace std;

struct node{
	int data;
	node* next;
};
struct node* head1;
struct node* head2;
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

node* merge(node* p, node* q){
	node* s=NULL;
	node* newhead=NULL;
	if(p==NULL) return q;
	if(q==NULL) return p;
	if(p!=NULL && q!=NULL){
		if(p->data <= q->data){
			s=p;
			p=s->next;
		}
		else{
			s=q;
			q=s->next;
		}
	}
	newhead=s;
	while(p!= NULL && q!=NULL){
		if(p->data<=q->data){
			s->next=p;
			s=p;
			p=s->next;
		}
		else{
			s->next=q;
			s=q;
			q=s->next;
		}
	}
	if(p==NULL){
		s->next=q;
	}
	else
		s->next=p;
	return newhead;
}
int main(int argc, char const *argv[])
{
	head1=NULL;
	head2=NULL;
	
	head1=insertAtBeg(head1,100);
	head1=insertAtBeg(head1,80);
	head1=insertAtBeg(head1,70);
	head1=insertAtBeg(head1,50);
	head1=insertAtBeg(head1,10);
	head2=insertAtBeg(head2,60);
	head2=insertAtBeg(head2,40);
	head2=insertAtBeg(head2,30);
	head2=insertAtBeg(head2,20);
	
	print(head1);
	print(head2);
	node* newnode=merge(head1,head2);
	print(newnode);

	return 0;
}