#include<bits/stdc++.h>
using namespace std;
class student
{
public:
    int x;
    char s[59];

};
int main()
{
    student rahim;
    rahim.x=40;
    strcpy(rahim.s,"Rahim");
    printf("%d\n%s",rahim.x,rahim.s);
}
