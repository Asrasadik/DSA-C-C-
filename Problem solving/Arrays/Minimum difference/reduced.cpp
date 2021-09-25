/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    vector<int> arr1 = { 23,5,10,17,30 };
  vector<int> arr2 = { 26,134,135,14,19};
  
  int n1=arr1.size();
  int n2 = arr2.size();
  int i=0,j=0,diff;
  int res=INT_MAX;
  int num1,num2;
    //cout<<"Hello World";
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());
    
while(i<n1 && j<n2){
      diff=abs(arr1[i]-arr2[j]);
      //cout<<diff;
      if( diff< res){
          res=diff;
          num1=arr1[i];
          num2=arr2[j];
      }
      
      if(arr1[i]<arr2[j])
      i++;
      else
      j++;
  }
  cout<<res<<endl;
  
  cout<<num1<<" "<<num2;
    return 0;
}

