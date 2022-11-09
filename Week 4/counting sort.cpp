#include<bits/stdc++.h>
using namespace std;
void print(int ar[],int siz)
{
    for(int i=0;i<siz;i++)
        cout<<ar[i]<<" ";
    cout<<endl;
}
int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
        cin>>ar[i];
    cout<<"Before sort; ";
    print(ar,n);
   //step 1: finding max
   int Max=INT_MIN;
   for(int i=0;i<n;i++){
    if(ar[i]>Max)
    Max=ar[i];
   }
//   step 2: initialization of count array
   int ctr[Max+1];
   memset(ctr,0,sizeof(int)*(Max+1));
//   step 3: frequency calculation
   for(int i=0;i<n;i++)
   {
       ctr[ar[i]]++;
   }
//   step 4: prefix sum
   for(int i=1;i<=Max;i++)
   {
       ctr[i]+=ctr[i-1];
   }
//   step 5: Final array-->Backword traversal of basic array
   int fina[n];
   for(int i=n-1;i>=0;i--)
   {
       ctr[ar[i]]--;
       int k=ctr[ar[i]];
       fina[k]=ar[i];
   }
   cout<<"After sort: ";
   print(fina,n);
}
