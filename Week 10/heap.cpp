#include<bits/stdc++.h>
using namespace std;

void printarray(int ar[], int siz);

void swap(int *a, int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}

void heapify(int ar[], int n, int current){
	int largest=current;
	int leftchild=2*current+1;
	int rightchild=2*current+2;
	if(leftchild<n&& ar[leftchild]<ar[largest]){
		largest=leftchild;

	}
	if(rightchild<n&&ar[rightchild]<ar[largest]){
        largest=rightchild;
	}
	if(largest!=current){
		swap(ar[current],ar[largest]);
		heapify(ar, n, largest);
	}
}

void heapsort(int array[], int size){
	for(int i=size-1;i>=0;i--){
		swap(array[0],array[i]);
		heapify(array,i,0);
		cout<<"Step: "<<size-i;
		printarray(array,size);
	}
}

void printarray(int ar[], int siz){
	cout<<endl;
	for(int i=0;i<siz;i++){
		cout<<ar[i]<<" ";
	}
	cout<<endl;
}

int main(){
   int n;
   cin>>n;
   int ar[n];
   for(int i=0;i<n;i++)
   	cin>>ar[i];
   //Heapify
   cout<<"Before Heapify: ";
   for(int i=0;i<n;i++){
   	cout<<ar[i]<<" ";
   }
   cout<<endl;
   int nonleafstart=(n/2)-1;
   for(int i=nonleafstart;i>=0;i--){
   	heapify(ar,n,i);
   	cout<<"Step: "<<nonleafstart+1-i;
   	printarray(ar,n);
   }
   cout<<"After Heapify: ";
   printarray(ar,n);
   cout<<endl;
   heapsort(ar,n);
}