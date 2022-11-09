#include<bits/stdc++.h>
#include"sazibstack.h"
using namespace std;

bool balancedparanthesis(string s){
	int n=s.size();
	Stack<char>st;
	bool isbalanced= true;
	if(s[0]==')'||s[0]=='}'||s[0]==']'){
		return false;
	}
	for(int i=0;i<n;i++){
		//opening bracket-> { [ ( 
		if(s[i]=='['||s[i]=='{'||s[i]=='(')
			st.Push(s[i]);
		// closing bracket -> { [ (
        else if(s[i]==')'){
        	if(st.Top()=='('){
              st.Pop();
           }
           else {
           	   isbalanced=false;
           	   break;
           }
       }
        else if(s[i]==']'){
        	if(st.Top()=='['){
              st.Pop();
           }
           else {
           	   isbalanced=false;
           	   break;
           }
       }
        else if(s[i]=='}'){
        	if(st.Top()=='{'){
              st.Pop();
           }
           else {
           	   isbalanced=false;
           	   break;
           }
       }
	}
	if(!st.Empty()){
		isbalanced=false;
	}
	return isbalanced;
}

int main(){
    string chk;
    cin>>chk;
    if(balancedparanthesis(chk)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}