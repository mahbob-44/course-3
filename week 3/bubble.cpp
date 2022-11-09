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
	for(int i=0;i<n;i++)
	{
		cout<<"After "<<i+1<<"th iteration: "<<endl;
		for(int j=0;j<n-1;j++)
		{
			if(ar[j]>ar[j+1])
				swap(ar[j],ar[j+1]);
			printarray(ar,n);
		}
	}
}