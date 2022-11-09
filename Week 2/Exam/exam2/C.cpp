#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a;
    cin>>t;
    int ctr[t];
    memset(ctr,0,sizeof(int)*t);
    for(int i=0;i<t;i++)
    {
        cin>>a;
        int ar[a];
        for(int j=0;j<a;j++){
            cin>>ar[j];
        }

        int small=ar[0];
        for(int j=1;j<a;j++)
            small=min(small,ar[j]);
        for(int j=0;j<a;j++){
            if(ar[j]==small)
                ctr[i]++;
        }
        if(ctr[i]==a)
            ctr[i]=0;

    }
    for(int i=0;i<t;i++)
    {
        cout<<ctr[i]<<endl;
    }
}
