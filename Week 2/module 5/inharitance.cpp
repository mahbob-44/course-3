#include<iostream>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
   }
   int Max=a[0];
   int second_max;
   for(int i=1;i<n;i++)
   {
       Max=max(Max,a[i]);
   }
   for(int i=0;i<n;i++)
   {
       if(a[i]!=Max){
        second_max=a[i];
        break;
       }
   }
   for(int i=0;i<n;i++)
   {
       if(a[i]!=Max)
       {
           second_max=max(second_max,a[i]);
       }
   }

   cout<<second_max;
}
