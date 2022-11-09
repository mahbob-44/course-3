#include<bits/stdc++.h> 
#define lld long long int

using namespace std;
int main() 
{ 
   int n;
   cin>>n;
   lld ar[n];
   lld ctr_even=0;
   lld ctr_odd=0;
   for(int i=0;i<n;i++){
    cin>>ar[i];
    if(ar[i]%2==0){
       ctr_even++;
    }
    else ctr_odd++;
   }
   if(ctr_even>ctr_odd){
    cout<<"READY FOR BATTLE";
   }
   else cout<<"NOT READY";
}