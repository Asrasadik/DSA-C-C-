#include<vector>
#include<algorithm>
#include<climits>
#include <bits/stdc++.h>
using namespace std;


pair<int,int> minDifference(vector<int> a,vector<int> b){
    //Complete this method
    pair<int,int> ans;
    
    int n1=a.size();
  int n2 = b.size();
  
  int num1,num2;
  int minDifference=INT_MAX, premin=INT_MAX;
  
   unordered_set<int> set1;
    unordered_set<int> set2;
        
   for (int i = 0; i < n1; i++)
    {
        if (set1.find(a[i]) == set1.end())
            set1.insert(a[i]);
    }
    
    for (int i = 0; i < n2; i++)
    {
        if (set2.find(b[i]) == set2.end())
            set2.insert(b[i]);
    }
    
  
  vector<int> arr3(n1+n2);
  
  merge(a.begin(), a.end(), b.begin(), b.end(), arr3.begin());
  
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
       // cout<<num1<<" "<<num2;
       ans.first=num1;
       ans.second=num2;
       
       return ans;
    
}
