#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a;
    cin>>t;
    int c[t];
    memset(c,0,sizeof(int)*t);
    for(int i=1;i<=t;i++)
    {
        int ctr[1001];
        memset(ctr,0,sizeof(int)*1001);
        cin>>a;
        int ar[a];
        int m=0;
        for(int j=0;j<a;j++){
            cin>>ar[j];
        }
        for(int j=0;j<a;j++)
        {
           for(int k=0;k<a;k++)
           {
               if(ar[j]==ar[k])
                ctr[ar[j]]++;
           }
        }
        for(int j=0;j<a;j++)
        {
            m=max(m,ctr[ar[j]]);
        }
        for(int j=0;j<a;j++)
        {
            if(ctr[ar[j]]==m){
                for(int k=0;k<a;k++)
                {
                    if(ar[k]!=ar[j]){
                        ar[k]=ar[j];
                        c[i-1]++;
                    }
                }
                break;
            }
        }

    }
    for(int i=0;i<t;i++)
    {
        cout<<c[i]<<endl;
    }
    return 0;

}
