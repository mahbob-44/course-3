#include<bits/stdc++.h>
using namespace std;
template<typename N>class node{
public:
    N value;
    node*next;
    node(N val){
    	value=val;
    	next=NULL;
    }
 };

template<typename Q>class Queue{
    node<Q>*front;
    node<Q>*rear;
public:
	Queue(){
		front=NULL;
		rear=NULL;
	}
	//enqueue-->push()
    void Push(Q val){
    	node<Q>*newnode=new node<Q>(val);
    	if(front==NULL){
    		front=newnode;
    		rear=newnode;
    		return;
    	}
    	rear->next=newnode;
    	rear=rear->next;
    }
	//dequeue-->pop
    Q Pop(){
    	Q chk;
    	if(rear==NULL){
    		cout<<"Queue underflow| there is no value in the Queue"<<endl;
    	    return chk;
    	}
    	node<Q>*delnode;
    	delnode=front;
    	front=front->next;
    	if(front==NULL){
    		rear=NULL;
    	}
    	chk=delnode->value;
    	delete delnode;
    	return chk;
    }
	//peak-->front(),back()
	Q Front(){
		Q chk=front->value;
		return chk;
	}
    
    Q Back(){
    	Q chk;
    	chk=rear->value;
    	return chk;
    }
	//empty-->empty()
	bool Empty(){
		if(front==NULL&&rear==NULL){
			return true;
		}
		else return false;

	}

};