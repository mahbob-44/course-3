#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int ar[n][n];
	int mid=n/2;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>ar[i][j];
		}
	}
	int sum=0;
	for(int i=0;i<mid;i++){
		for(int j=0;j<=n;j++){
			if(i==0&&j<=mid||i==0&&j==n-1){
				sum+=ar[j][i];
			}
			else if(i>0&&i<=mid){
				if(j==mid||j==n-1){
					sum+=ar[i][j];
				}
			}
		}
	}
	for(int i=mid+1;i<n;i++){
		for(int j=0;j<n;j++){
			if(i<n-1){
				if(j==0||j==mid)
					sum+=ar[i][j];
			}
			else if((i==n-1&&j>=mid)||(i==n-1&&j==0))
				sum+=ar[i][j];
		}
	}
	for(int j=0;j<n;j++){
		sum+=ar[mid][j];
	}
	cout<<sum<<endl;

}