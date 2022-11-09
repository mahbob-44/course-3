#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin>>a>>b;
   switch(a<b)
   {
   case 1:
       {
           cout<<"the greatest number is "<<b;
           break;
       }
    default :
        cout<<"the greatest number is "<<a;
   }

}
