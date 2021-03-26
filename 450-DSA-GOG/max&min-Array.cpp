#include<iostream>

using namespace std;
int main(){

  int a[5]={7,6,5,1,2};
  int n= sizeof(a)/sizeof(a[0]);
  int i;
  int min=a[i],max=a[i];
  
  for(i=1;i<n;i++){
  	if(a[i]<min){
  		min=a[i];
	  }
	  if(a[i]>max)
	  max=a[i];
  }
  cout<<"max= "<<max<<endl;
  cout<<"min= "<<min<<endl;
  cout<<"Array is: ";
  for(i=0;i<n;i++){
  	cout<<a[i]<<" ";
  }
  return 0;
}
