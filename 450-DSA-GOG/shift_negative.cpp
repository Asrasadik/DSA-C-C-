#include <bits/stdc++.h>
using namespace std;
void shiftall(int a[], int l,int r)
{
	while(l<=r){
		if(a[l]<0 && a[r]>0){
			l++;
		}
		else if(a[l]>0 && a[r]<0){
			swap(a[l],a[r]);
			l++;
			r--;	
		}
		else if(a[l]>0 && a[r]>0){
			r--;
		}
		else{
			l++;
			r--;
		}
	}
	
}

using namespace std;
int main(){
	 int a[]={-12, 11, -13, -5,6, -7, 5, -3, 11};
  int n= sizeof(a)/sizeof(a[0]);
  int i;
  shiftall(a,0,n-1);
  for(i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
  return 0;
}
  
  
