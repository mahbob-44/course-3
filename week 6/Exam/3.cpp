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
		for(int i=0;i<n;i++)
			cin>>ar[i];
		for(int i=0;i<n;i++)
			cin>>ar2[i];
		int m;
		cin>>m;
		int ar3[m];
		for(int i=0;i<m;i++)
			cin>>ar3[i];
		int flag[m];
		int sum=0;

		for(int i=0;i<m;i++){
            for(int j=0;j<ar3[i];j++)
			{
			sum+=ar[j]-ar2[j];
		   }
		   cout<<sum<<endl;
			// if(sum<0)
			// 	flag[i]=0;
			// else 
			// 	flag[i]=1;
		}
		// for(int i=0;i<m;i++){
		// 	cout<<flag[i]<<" ";
		// }
		cout<<endl;

	}
}