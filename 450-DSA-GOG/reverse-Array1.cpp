#include<iostream>

using namespace std;
void reverse(int a[],int s,int e){
	if(s>=end)
	return ;
	int temp=a[s];
	a[s]=a[e];
	a[e]=temp;
}
int main(){
	/*string str="geeks";
	int len= str.size();
  //Your code here
  int i,j=0;
  string str1;
  for(i=len-1;i>=0;i--){
      str1[j]=str[i];
      j++;
  }
  str1[j]='\0';
  cout<<str1;*/
  int arr[5]={1,2,3,4,5};
  int n= sizeof(arr)/sizeof(arr[0]);
  int start=0,end=n-1,i;
  int temp;
  while(start<end){
  	temp=arr[start];
  	arr[start]=arr[end];
  	arr[end]=temp;
  	start++;
  	end--;
  }
  for(i=0;i<n;i++){
  	cout<<arr[i];
  }
  return 0;
}
