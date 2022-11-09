#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int mod,org=n;
    int div=0;
    while(n!=0)
    {
        mod=n%10;
        div=div*10+mod;
        n/=10;
    }
    if(div==org)
    {
        cout<<"YES";
    }
    else
        cout<<"NO";
}

