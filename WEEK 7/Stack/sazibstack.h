#include<bits/stdc++.h>
using namespace std;
template<typename N>class node{
public:
    N value;
    node*next;
    node*prev;
    node(N val){
    	value=val;
    	next=NULL;
    }
};
template<typename S>class Stack{
	node<S>*head;
	node<S>*top;
    int ctr=0;
public:
	Stack(){
		head=NULL;
		top=NULL;
	}
	//push
	void Push(S val){
		node<S>* newnode=new node<S>(val);
		if(head==NULL){
           head=top=newnode;
           ctr++;
           return;
		}
		else{
            top->next=newnode;
            newnode->prev=top;
            top=newnode;
            ctr++;
		}
	}
	//pop
    S Pop(){
    	node<S>*delnode=top;
    	S chk;
    	if(head==NULL){
    		cout<<"Stack underflow"<<endl;
    		return chk;
    	}
       else if(top==head){
        	head=top=NULL;

        }
        else{
    	top=delnode->prev;
    	top->next=NULL;
        }
        chk=delnode->value;
        delete delnode;
        ctr--;
        return chk;
    }
	//empty
	bool Empty(){
		if(head==NULL){
			return true;
		}
		else 
			return false;
	}
	//size
	int ssize(){
		return ctr;
	}
	//top
	S Top(){
		S chk;
	if(top==NULL){
		cout<<"Stack underflow | there is no element in top"<<endl;
	}
	else{
		chk=top->value;
	}
    return chk;
    }
    // Mid
    S mid(){
    	node<S>* slow=head;
    	node<S>* fast=head;
    	while(fast->next!=NULL){
    		slow=slow->next;
    		fast=fast->next->next;
    	}
    	return slow->value;
    }
};