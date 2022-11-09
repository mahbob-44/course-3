#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	int ar[t];
	
	int Max=INT_MIN;
	for(int i=0;i<t;i++){
		cin>>ar[i];
		
	}
	sort(ar,ar+t);
	int ctr[ar[t-1]+1]={0};
	for(int i=0;i<t;i++){
		ctr[ar[i]]++;
		
	}
	for(int i=0;i<ar[t-1];i++){
		if(ctr[i+1]!=0)
		cout<<i+1<<"->"<<ctr[i+1]<<endl;
	}
}