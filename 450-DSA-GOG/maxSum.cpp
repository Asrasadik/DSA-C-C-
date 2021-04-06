#include<iostream>
using namespace std;

int sumarray (int a[],int n){
	int start=0,end=n-1;
	int sum=0;
	while(start<end){
		if(a[start]>a[end]){
			sum=sum+a[start];
		}
		else
		sum=sum+a[end];
		
		start++;
		end--;
	}
	cout<<start<<endl;
	cout<<end<<endl;
	
	if(start==end){
		sum=sum+a[start];
	}
	
	return sum;
}
int main(){
	int a[]={3,0,7,2,1,9};
	int n=sizeof(a)/sizeof(a[0]);
	int sum = sumarray(a,n);
	cout<<sum;
	
	return 0;
}
