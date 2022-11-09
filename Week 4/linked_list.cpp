#include<bits/stdc++.h>
using namespace std;
class node
{
  public:
  	int value;
  	node* Next;
};
void display(node* n)
{
    while(n!=NULL){
    	cout<<n->value<<" ";
    	n=n->Next;
    }
}
int main()
{
	node* head= new node();
	node* second=new node();
	node*third= new node();
	node* fourth= new node();

	head->value=1;
	second->value=5;
	third->value=9;
	fourth->value=8;

	head->Next=second;
	second->Next=third;
	third->Next=fourth;
    fourth->Next=NULL;
    display(head);
}