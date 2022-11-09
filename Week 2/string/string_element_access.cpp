#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;

	for(int i=0;i<t;i++)
	{
		int n;
		cin>>n;
		int ar[n];
		int pro=0;
		int ctr=0;
		for(int j=0;j<n;j++)
		{
			cin>>ar[j];

			if(ar[j]<=-1){
				pro++;
			}
			if(ar[j]==0)
				ctr++;
		}
		if(ctr>0)
			cout<<0<<endl;
		else{
		if(pro%2==0)
			cout<<0<<endl;
		else 
			cout<<1<<endl;
	}
	}
}