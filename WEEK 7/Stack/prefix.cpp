#include<bits/stdc++.h>
#include "sazibstack.h"
using namespace std;
int prefixevaluation(string chk){
    Stack <int> st;
    for(int i=chk.length()-1;i>=0;i--){
    	//chek i 0to 9---> operand
    	if(chk[i]>='0'&&chk[i]<='9'){
    		st.Push(chk[i]-'0');
    	}
    	//chek i ---> operator
    	else{
    		int a=st.Pop();
    		int b=st.Pop();
    	switch(chk[i]){
    		case '+':
    		st.Push(a+b);
    		break;
    		case '-':
    		st.Push(a-b);
    		break;
    		case '*':
    		st.Push(a*b);
    		break;
    		case '/':
    		st.Push(a/b);
    		break;
    		case '^':
    		st.Push(pow(a,b));
    		break;
    		default:
    		break;
    	}
      }
    }
    return st.Top();

}
int main(){
	cout<<prefixevaluation("+9*3/84")<<endl;
	return 0;
}