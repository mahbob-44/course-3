#include<bits/stdc++.h>
using namespace std;
class node{
public:
   int value;
   node* next;
   node(int val){
   	value=val;
   	next=NULL;
   }
};
void insertattail(node*&head, int val){
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
void display(node*temp){
	while(temp!=NULL){
		if(temp->value%2==0)
			temp->value=-1;
		cout<<temp->value;
		if(temp->next!=NULL){
			cout<<"->";
		}
			temp=temp->next;
		
	}
}
int main(){
    node*head=NULL;
    int n;
  cin>>n;
    
    	int m;
    while(n--){
    	cin>>m;
    	insertattail(head,m);
    	// cin>>n;
    }
    display(head);
}