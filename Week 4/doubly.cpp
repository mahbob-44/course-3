#include<bits/stdc++.h>
using namespace std;
class node{
public:
	int data;
	node* next;
	node* prev;
	node(int val){
		data=val;
		next=NULL;
		prev=NULL;
	}
};

void push(node*& head, int val){
     node* newnode=new node(val);
     if(head==NULL){
     	head=newnode;
     	return;
     }
     node* temp=head;
     while(temp->next!=NULL){
     	temp=temp->next;
 	}
    temp->next=newnode;
    newnode->prev=temp;
    
}

void display(node*n){
	while(n!=NULL){
		cout<<n->data;
	
		if(n->next!=NULL){
			cout<<"-><-";
		}
        n=n->next;
	}
}

int main(){
	node* head =NULL;
	char choice='y';
	while(choice=='y'){
		int n;
		cin>>n;
		push(head,n);
		cin>>choice;
	}
	display(head);
}