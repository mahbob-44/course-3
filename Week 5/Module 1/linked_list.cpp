#include<bits/stdc++.h>
#define lld long long int
#define loop(n) for(int i=0;i<n;i++)
#define lop(m) for(int j=0;j<m;j++)
#define en "\n"
using namespace std;

class node{
public:
	int data;
	node* next;
	node(int val){
		data=val;
		next=NULL;
	}
};

void insertattail(node*&head,int val){
	node*newnode=new node(val);
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

void print(node*n){
	while(n!=NULL){
		cout<<n->data;
		if(n->next!=NULL){
			cout<<"->";
		}
		n=n->next;
	}
}

int main(){
  node* head=NULL;
   char choice='y';
   	int n;
   while(choice=='y'){
   	cin>>n;
   	insertattail(head,n);
   	cin>>choice;
   }
   print(head);
}