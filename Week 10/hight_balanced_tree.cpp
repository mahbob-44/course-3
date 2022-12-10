#include<bits/stdc++.h>
using namespace std;

class treenode{
public:
	int data;
	treenode* left;
	treenode* right;
	treenode(int val){
		data=val;
		left=NULL;
		right=NULL;
	}
};

void levelorder(treenode* root){
	if(root==NULL)
		return;
	queue<treenode*>k;
	k.push(root);
	while(!k.empty()){
		treenode* parent=k.front();
		k.pop();
		cout<<parent->data<<" ";
		if(parent->left!=NULL) k.push(parent->left);
		if(parent->right!=NULL) k.push(parent->right);
	}
}

treenode* insert(int l, int r, int ar[]){
	if(l>r) return NULL;
	int mid=l+(r-l)/2;
	treenode* newnode= new treenode(ar[mid]);
	newnode->left=insert(l, mid-1,ar);
	newnode->right=insert(mid+1,r,ar);
	return newnode;
}

int main(){
	int n;
	cin>>n;
	int ar[n];
	for(int i=0;i<n;i++){
        cin>>ar[i];
	}
    treenode* root=insert(0,n-1,ar);
    levelorder(root);
}