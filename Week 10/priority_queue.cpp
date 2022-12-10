#include<bits/stdc++.h>
using namespace std;
#define P pair<int,int>
int main(){
	priority_queue<P, vector<P>,greater<P>> v;
	v.push(make_pair(6,9));
	v.push(make_pair(2,4));
	v.push(make_pair(7,6));
	while(!v.empty()){
		cout<<v.top().first<<"|"<<v.top().second<<endl;
		v.pop();
	}
}