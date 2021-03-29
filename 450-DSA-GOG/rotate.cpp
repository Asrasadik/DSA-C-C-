#include<iostream>
using namespace std;

void rotate(int a[],int n){
	int i;
	swap(a[0],a[n-1]);
	
	for(i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	
}

int main(){
	int a[]={1,2,3,4,5};
	int b[]={1,2,3};
	int n=5;
	
	rotate(a,n);
	return 0;
}
