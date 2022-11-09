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
	// temp=temp->next;

}
void delet(node*&head){
	head=head->next;
}
void display(node*temp){
	while(temp!=NULL){
		cout<<temp->value;
		if(temp->next!=NULL){
			cout<<"->";
		}
		temp=temp->next;
	}
	cout<<endl;
}
int main(){
	node*head=NULL;
	int n;
	cin>>n;
	int i;
	while(n--){
		cin>>i;
		insertattail(head,i);
	}
	delet(head);
	display(head);


}