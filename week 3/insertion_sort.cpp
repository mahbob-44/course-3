#include<bits/stdc++.h>
using namespace std;
void printarray(int ar[],int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<ar[i]<<" ";
	}
	cout<<endl;
}
int main()
{
	int n;
	cout<<"Enter the length of the array: ";
	cin>>n;
	int ar[n];
	cout<<"Enter the elements of the array: ";
	for(int i=0;i<n;i++)
	{
       cin>>ar[i];
	}
	cout<<"Before iteration: ";
	for(int i=0;i<n;i++)
	{
		cout<<ar[i]<<" ";
	}
	cout<<endl;
	for(int i=1;i<n;i++)
	{
		cout<<"After the "<<i<<"th iteration: "<<endl;
		int j=i-1;
		int key=ar[i];
		while(ar[j]>key&&j>=0){
			ar[j+1]=ar[j];
			j--;
		}
		ar[j+1]=key;
		printarray(ar,n);
	}
}