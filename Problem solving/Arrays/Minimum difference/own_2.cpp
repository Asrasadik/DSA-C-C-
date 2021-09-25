/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {  
  vector<int> arr1 = { 23,5,10,17,30 };
  vector<int> arr2 = { 26,134,135,14,19};
  
  int n1=arr1.size();
  int n2 = arr2.size();
  
  int num1,num2;
  int minDifference=INT_MAX, premin=INT_MAX;
  
   unordered_set<int> set1;
        unordered_set<int> set2;
        
   for (int i = 0; i < n1; i++)
    {
        if (set1.find(arr1[i]) == set1.end())
            set1.insert(arr1[i]);
    }
    
    for (int i = 0; i < n2; i++)
    {
        if (set2.find(arr2[i]) == set2.end())
            set2.insert(arr2[i]);
    }
    
  
  vector<int> arr3(n1+n2);
  
  merge(arr1.begin(), arr1.end(), arr2.begin(), arr2.end(), arr3.begin());
  
   sort(arr3.begin(), arr3.end());
   
        
        int n=arr3.size();
        
        
       
        for(int i=0;i<n-1;i++){
            
            if((set1.find(arr3[i]) != set1.end())){
                if((set2.find(arr3[i-1]) != set1.end()) and (set2.find(arr3[i+1]) != set2.end())){
               
                
                int min1=abs(arr3[i]-arr3[i-1]);
                int min2=abs(arr3[i]-arr3[i+1]);
                
                
                if(min1<min2 and min1<premin){
                    num1=arr3[i];
                    num2=arr3[i-1];
                   minDifference=min1;
                     
                }
                else if(min1>min2 and min2<premin){
                    num1=arr3[i];
                    num2=arr3[i+1];
                   minDifference=min2;
                    
                } 
                premin=min(minDifference,premin);
               
            }
            }
        }
        cout<<num1<<" "<<num2;
  
   return 0;  
   }
