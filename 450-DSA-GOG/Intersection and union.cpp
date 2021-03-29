#include<iostream>
using namespace std;

void intersection(int a[],int b[], int n1,int n2){
	int i,j;
	int cnt=0;
	for(i=0;i<n1;i++){
		for(j=0;j<n2;j++){
			if(a[i]==b[j]){
				cout<<a[i]<<" ";
				cnt++;
			}
		}
		
	}
	cout<<"\nIntersection elements: "<<cnt;
	
}

void unioun(int a[],int b[], int n1,int n2){
	int i=0,j=0;
	cout<<"\n";
	while(i<n1 && j<n2){
			if(a[i]<b[j]){
				cout<<a[i];
				i++;
			}
			else if(a[i]>b[j]){
				cout<<b[j];
				j++;
			}
			else{
				cout<<b[j]<<" ";
				i++;
				j++;
			}
}
while(i<n1){
	cout<<a[i++]<<" ";
}
while(j<n2){
	cout<<b[j++]<<" ";
}
}
int main(){
	int a[]={1,2,3,4,5};
	int b[]={1,2,3};
	int n1=5,n2=3;
	
	intersection(a,b,n1,n2);
	unioun(a,b,n1,n2);
	return 0;
}
