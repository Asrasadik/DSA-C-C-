#include<iostream>
using namespace std;

int minJumps(int a[], int n){
	int i=0,jump;
	int cnt=0;
	
	while(i<n){
		jump=a[i];
		cnt++;
		i=i+jump;
		if(i==n-1){
			break;
		}
	}
	cout<<cnt;
}

int main(){
	int a[]={1,4,3,2,6,7 };
	int n= 6;
	minJumps(a, n);
	
	
	return 0;
}
