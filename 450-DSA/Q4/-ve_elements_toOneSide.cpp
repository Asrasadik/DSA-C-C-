//	Move all the negative elements to one side of the array

#include<iostream>
using namespace std;

void rearrange(int a[],int n){
	int s=0,e=n-1;
	while(s<=e){
		if(a[s]>0 && a[e]<0){
		swap(a[s],a[e]);
		s++;
		e--;
		
	}
	else if(a[s]<0 && a[e]<0)
		s++;
	else if(a[s]>0 && a[e]>0)
	e--;
	 else{
      s += 1;
      e -= 1;
    }
	}
}

int main(){
	int a[]={-12, 11, -13, -5, 6, -7, 5, -3, -6};
	int n = sizeof(a) / sizeof(a[0]);
	
	rearrange(a,n);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
	
	
}
