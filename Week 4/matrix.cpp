#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int ar[n][m];
    int ctr[1001]={0};
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++){
            cin>>ar[i][j];
            ctr[ar[i][j]]++;
            if(ctr[ar[i][j]]>1)
                ar[i][j]=-1;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<ar[i][j]<<" ";
        }
        cout<<endl;
    }

}
