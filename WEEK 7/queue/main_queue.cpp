#include<bits/stdc++.h>
#include"myqueue.h"
using namespace std;
int main(){
  Queue<int> q;
  q.Push(1);
  q.Push(2);
  q.Push(0);
  q.Push(3);
  while(!q.Empty()){
  	cout<<q.Pop()<<" ";
  }
  if(!q.Empty()){
  cout<<q.Front()<<endl;
  cout<<q.Back()<<endl;
  cout<<endl;
  }
}