#include<bits/stdc++.h>
#include "mystack.h"
using namespace std;

void reverseStack(Stack<int> &chk){
	int topelement=chk.Top();
	chk.Pop();
	reverseStack(chk);
}

int main(){
	stack<int>st;
	for(int i=1;i<=5;i++){
	st.Push(i);
    }
   
   reverseStack(st);
}