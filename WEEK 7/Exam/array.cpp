#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int ar[n];
	ar[0]=1;
	for(int i=1;i<=n;i++){
		ar[i]=ar[i-1]*i;
	}
		cout<<ar[n];
}