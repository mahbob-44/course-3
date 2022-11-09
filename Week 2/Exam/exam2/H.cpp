#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s;
   cin>>s;
   int in1=s.find('A');
   int in2=s.rfind('Z');
   cout<<in2-in1+1;
}
