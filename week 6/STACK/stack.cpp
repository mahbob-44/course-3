#include<bits/stdc++.h>
using namespace std;
class node{
public:
    int value;
    node*next;
    node*prev;
    node(int val){
    	value=val;
    	next=NULL;
    }
};
class stack{
	node*head;
	node*top;
    int ctr=0;
public:
	stack(){
		head=NULL;
		top=NULL;
	}
	//push
	void push(int val){
		node* newnode=new node(val);
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
    int pop(){
    	node*delnode=top;
    	int chk;
    	if(head==NULL){
    		cout<<"Stack underflow"<<endl;
    		return -1;
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
	bool empty(){
		if(head==NULL){
			return true;
		}
		else 
			return false;
	}
	//size
	int size(){
		return ctr;
	}
	//top
	int top(){
	if(top==NULL){
		cout<<"Stack underflow | there is no element in top"<<endl;
	}
	else 
		return top->vlaue;
    }

    
};
int main(){

}