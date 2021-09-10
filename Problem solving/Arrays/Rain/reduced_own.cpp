/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr  {0,1,0,2,1,0,1,3,2,1,2,1};
    int n= arr.size();
  auto l = arr;
    auto r = arr;
    int h=0;
    
   for(int i=0;i<n;i++){
        if(arr[i]>h){
            h=arr[i];
        }
        else
        {
            l[i]=h;
        }
       
    } 
    h=0;
       for(int i=n-1;i>=0;i--){
        if(arr[i]>h){
            h=arr[i];
        }
        else
        {
            r[i]=h;
        }
       
    } 
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+min(l[i],r[i])-arr[i];
    }
    cout<<sum;

    return 0;
}

