#include<bits/stdc++.h>
using namespace std;
int main()
{
	string st="abcdefghij";
	cout<<st.size()<<endl;
	st.resize(5);
	cout<<st.size();
	st.clear();
	cout<<endl<<st.size()<<endl;
	if(st.empty())
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}