#include<iostream>
using namespace std;

void rotate(int a[],int n,int k){
	int i;
	if(k>0){
	int x=a[n-1];
	
	for(i=n-1;i>0;i--){
		a[i]=a[i-1];
	}
	a[0]=x;
	
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
	cout<<"\n";
	rotate(a,n,k-1);
}

}

int main(){
	int a[]={1,2,3,4,5};
	int n=5;
	int k=2;
	
	rotate(a,n,k);
	return 0;
}
