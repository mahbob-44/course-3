#include<bits/stdc++.h>
using namespace std;

template<typename T>T my_max(T a, T b){
	return (a>b)?a:b;
}
int main(){
	cout<<my_max<int>(3,5)<<endl;
	cout<<my_max<float>(2.4,4.5)<<endl;
	cout<<my_max<char>('a','b')<<endl;
}