#include <bits/stdc++.h>

using namespace std;
int main(){

  int a[]={0,2,1,2,0};
  int n= sizeof(a)/sizeof(a[0]);
	sort(a, a + n);
	int i;
	for(i=0;i<n;i++){
		cout<<a[i];
	}
  return 0;
}
