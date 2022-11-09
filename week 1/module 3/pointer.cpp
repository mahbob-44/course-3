#include<iostream>
using namespace std;
int print(int *ptr)
{
    *ptr=299;
}
int main()
{
    int a=34;
    int *x=&a;
    print(x);
    cout<<a;
}
