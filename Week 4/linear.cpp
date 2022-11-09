#include<bits/stdc++.h>
using namespace std;
class node
{
public:
	int value;
	node* next;
	//constructor creation
	node (int val){
		value=val;
        next=NULL;
	}
};

//inserting section
void insertattail(node* &head,int val){
	node*newnode=new node(val);
	if(head==NULL){
      head=newnode;
      return;
	}
	node*temp=head;
    while(temp->next!=NULL)
    {
    	temp=temp->next;
    }
    temp->next=newnode;
}

//inserting at head;
void insertathead(node* &head,int val){
   // s1: newnode_cration
   node*newnode=new node(val);
   // s2: upadate of newnode
   newnode->next=head;
   // s3: update of head
   head=newnode;

}

//inserting at spacific position
// void insertatspacificposition(node* &head,int position,int val){

// }

//display section
void display(node*n)
{
	while(n!=NULL)
	{
		cout<<n->value<<" ";
		n=n->next;
	}
}

//main section
int main(){
    node*head=NULL;
    int n;
    char choice='y';
    while(choice=='y'){
      cin>>n;
      insertattail(head,n);
      cin>>choice;
    }
    display(head);


}