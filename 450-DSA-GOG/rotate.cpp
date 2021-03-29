#include<iostream>
using namespace std;

void rotate(int a[],int n){
	int i;
	
	int x=a[n-1];
	
	for(i=n-1;i>0;i--){
		a[i]=a[i-1];
	}
	a[0]=x;
	
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
	
}

int main(){
	int a[]={1,2,3,4,5};
	int n=5;
	
	rotate(a,n);
	return 0;
}
