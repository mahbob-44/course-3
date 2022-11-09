#include<bits/stdc++.h>
#include"sazibstack.h"
using namespace std;
int main(){
	 int n;
	 cin>>n;
	 int ar[n];
	 for(int i=0;i<n;i++){
        cin>>ar[i]; 
	 }
	 Stack<int> st;
	 Stack<int> minstack;
	 int Min=INT_MAX;
	 for(int i=0;i<n;i++){
	 	if(ar[i]<=Min){
	 		minstack.Push(ar[i]);
	 		Min=ar[i];
	 	}
	 	st.Push(ar[i]);
	 }
	 while(!st.Empty()){
	 	//if top of minstack and st if equal
	 	if(minstack.Top()!=st.Top()){
	 		st.Pop();
	 		cout<<minstack.Top()<<" ";
	 	}
	 	else {
	 		cout<<minstack.Top()<<" ";
	 		minstack.Pop();
	 		st.Pop();
	 	}
	 }
	 cout<<endl<<endl;
}