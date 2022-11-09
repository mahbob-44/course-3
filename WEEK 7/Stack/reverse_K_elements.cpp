#include<bits/stdc++.h>
#include "sazibstack.h"
#include "myqueue.h"
using namespace std;
void reversekelements(Queue<int>&q,int n, int k){
   int x=n/k;
   int y=n%k;
   Stack<int> st;

   while(x>0){
      st.Push(q.Pop());
   }	
   while(!st.Empty())
   {
   	q.Push(st.Pop());
   }

}
int main(){
    int n,k;
    cin>>n>>k;
    Queue<int> q;

    for(int t=0;i<n;i++){
    	int val;
    	cin>>val;
          Q.Push(val);
    }
    reversekelements(q,n,k);
}