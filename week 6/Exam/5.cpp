#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int ar[n];
		int ar2[n];
		int m;
		for(int i=0;i<n;i++){
            cin>>ar[i];
		}
		for(int i=0;i<n;i++){
			cin>>ar2[i];
		}
		cin>>m;
		int p[m];
		int sum=0;
		int sum2=0;
		for(int i=0;i<m;i++){
			cin>>p[i];
            for(int j=0;j<=p[i];j++){
            	sum+=ar[j]-ar2[j];
            }
            // cout<<sum-sum2<<endl;
            if(sum<0)
            	cout<<0<<" ";
            else 
            	cout<<1<<" ";
		}
		cout<<endl;
	}
}