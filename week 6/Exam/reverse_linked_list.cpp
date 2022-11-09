#include<bits/stdc++.h>
using namespace std;
class node{
public:
	int value;
	node*next;
	node(int val){
		value=val;
		next=NULL;
	}
};

void insertattail(node*&head,int val){
	node* newnode=new node(val);
	if(head==NULL){
		head=newnode;
		return;
	}
	node*temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=newnode;
}

node* reverseknode(node*&head, int pos){
	node*prev=NULL;
	node*current=head;
	if(head==NULL){
		return head;
	}
	node*after=head->next;
	while(pos--){
		current->next=prev;
		prev=current;
		current=after;
		if(current==NULL)
			break;
		after=after->next;
	}
	return prev;
}

void display(node*head){
	while(head!=NULL){
		cout<<head->value;
		if(head->next!=NULL)
			cout<<"->";
		head=head->next;
	}
}

int main(){
	node*head=NULL;
	int choice;
	cin>>choice;
	int n;
	while(choice--){
		cin>>n;
		insertattail(head,n);
	}
	int position;
	cin>>position;
	head=reverseknode(head,position);
	display(head);
}