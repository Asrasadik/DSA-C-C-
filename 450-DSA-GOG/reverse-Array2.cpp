#include<iostream>

using namespace std;
void reverse(int a[],int s,int e){
	if(s>=e)
	return ;
	int temp=a[s];
	a[s]=a[e];
	a[e]=temp;
	reverse(a,s+1,e-1);
}

void printArray(int arr[], int size)
{
   for (int i = 0; i < size; i++)
   cout << arr[i] << " ";
 
   cout << endl;
}

int main(){
	int a[5]={1,2,3,4,5};
	int n= sizeof(a)/sizeof(a[0]);
	int s=0,e=n-1;
	reverse(a, 0, 5);
	printArray(a, 6);
	return 0;
}
