#include <bits/stdc++.h>

using namespace std;
int main(){

  int a[6]={7,10,4,2,20,15};
  int n= sizeof(a)/sizeof(a[0]);
  int k=3;
	sort(a, a + n);
	cout<<a[k-1];
  return 0;
}
