#include<bits/stdc++.h>
#define lld long long int
#define loop(n) for(int i=0;i<n;i++)
#define lop(m) for(int j=0;j<m;j++)
#define en "\n"
using namespace std;

class treenode{
public:
	int data;
	treenode* left;
	treenode* right;
	treenode(int val){
		this->data=val;
		this->left=NULL;
		this->right=NULL;
	}
};

treenode* bstinsert(treenode*root,int val){
	treenode* newnode=new treenode(val);
	if(root==NULL){
		root=newnode;
		return root;
	}
	if(val<root->data){
		root->left=bstinsert(root->left,val);
	}
	else if(val>root->data){
		root->right=bstinsert(root->right,val);
	}
	return root;
}

void inorder(treenode*root){
	if(root==NULL){
		return;
	}
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
	cout<<endl;
}

treenode* searchbst(treenode*root,int val){
	if(root==NULL){
		return root;
	}
	if(root->data==val){
		cout<<root->data;
		return root;
	}
	else if(val<root->data){
		cout<<root->data<<" ";
		searchbst(root->left,val);
	}
	else {
		cout<<root->data<<" ";
		searchbst(root->right,val);
	}
	return root;
}

treenode* inordersucc(treenode* root){
	treenode* curr=root;
	if(curr->left!=NULL){
		curr=curr->left;
	}
	return curr;

}

treenode* deletionbst(treenode* root, int val){
	if(val<root->data){
        root->left=deletionbst(root->left,val);
	}
	else if(val>root->data){
       root->right=deletionbst(root->right,val);
	}
	else {
		// implementation 3 case
		if(root->left==NULL){
         treenode* temp=root->right;
         delete root;
         return temp;
		}
		else if(root->right==NULL){
          treenode* temp=root->left;
          delete root;
          return temp;
		}
		else{
          treenode*temp=inordersucc(root->right);
          root->data=temp->data;
          
		}
	}
}

int main(){
   treenode*root=NULL;
   int n;
   char choice='y';
   while(choice=='y'){
   	cin>>n;
   root= bstinsert(root,n);
    cin>>choice;
   }
   int key;
   cin>>key;

   inorder(root);
  if( searchbst(root,key)==NULL){
  	cout<<endl;
  	cout<<"Value does not exist in the BST";
  }
  else{cout<<endl; cout<<"Value exixt in the bst";
}
}