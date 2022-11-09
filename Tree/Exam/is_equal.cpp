#include<bits/stdc++.h>
#define loop(n) for(int i=0;i<n;i++)
#define lop (m) for(int j=0;j<m;j++)
using namespace std;

class treenode{
public:
	int data;
	treenode*left;
	treenode* right;
	treenode(int val){
		this->data=val;
		this->left=NULL;
		this->right=NULL;
	}
};

void averageOfLevels(treenode* root)
{
    vector<float> res;
    queue<treenode*> q;
    q.push(root);
    while (!q.empty()) {
        int sum = 0, count = 0;
        queue<treenode*> temp;
        while (!q.empty()) {
           treenode* n = q.front();
            q.pop();
            sum += n->data;
            count++;
            if (n->left != NULL)
                temp.push(n->left);
            if (n->right != NULL)
                temp.push(n->right);
        }
        q = temp;
        cout << (sum * 1.0 / count) << " ";
    }
}

int main(){	
    int a,b;
    	cin>>a;
    	treenode* root1=new treenode(a);
    		queue<treenode*>k;
    		k.push(root1);
    		while(!k.empty()){
    			treenode* present_root1=k.front();
    			k.pop();
    			int x,y;
    			cin>>x>>y;
    			treenode* n1=NULL;
    			treenode* n2=NULL;
    			if(x!=-1) n1=new treenode(x);
    			if(y!=-1) n2=new treenode(y);
    			present_root1->left=n1;
    			present_root1->right=n2;
    			if(n1!=NULL) k.push(n1);
    			if(n2!=NULL) k.push(n2);
    		}
    		averageOfLevels(root1);
}
/*
Sample input: 
3
9 20 
-1 -1 15 7
-1 -1 -1 -1
*/

/* Sample output: 
3 14.5 11 
*/