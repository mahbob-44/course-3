#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,q,n,r,s;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n>>q;
        int ar[n];
        int mi[q];
        for(int j=0;j<n;j++)
            cin>>ar[j];
        for(int k=0;k<q;k++)
        {
            cin>>r>>s;
            mi[k]=ar[r-1];
            for(int j=r-1;j<s-1;j++)
                mi[k]=min(mi[k],ar[j+1]);
        }
        cout<<"Case "<<i+1<<":"<<endl;
        for(int j=0;j<q;j++)
        {
           cout<<mi[j]<<endl;
        }
    }
}
