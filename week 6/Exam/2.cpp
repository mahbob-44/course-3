#include<bits/stdc++.h>
using namespace std;
int bs(int ar[], int low,int up, int n){
	if(low<=up){
	int mid=(low+up)/2;
	if(ar[mid]==n) 
		return mid;
	else if(n>ar[mid]){
		low=mid+1;
		bs(ar,low,up,n);
	}
	else if(n<ar[mid]){
		up=mid-1;
		bs(ar,low,up,n);
	}
}
	else 
		return  -1;
}
int main()
{
	int n,m;
	cin>>n;
	int ar[n];
	for(int i=0;i<n;i++){
		cin>>ar[i];
	}
	cin>>m;
	int ar2[m];
	for(int i=0;i<m;i++){
		cin>>ar2[i];
	}
	sort(ar,ar+n);
	sort (ar2,ar2+m);
	for(int i=0;i<n;i++){
		int pos=bs(ar2,0,m-1,ar[i]);
		if(pos==-1){
			cout<<ar[i]<<" ";
		}
	}
	
}