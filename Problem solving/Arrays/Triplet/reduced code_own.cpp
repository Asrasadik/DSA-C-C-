/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
//Time complexity = O(n^2)

vector<int> pairsum(vector<int> arr,int s,int e,int sum){
     vector<int> res;
    while(s<e){
	    int add=arr[s]+arr[e];
	    if(add==sum){
	        //cout<<"add = "<<add<<endl;
	    res.push_back(arr[s]);
	    res.push_back(arr[e]);
	    s++;
	    e--;
	    }
	    else if(add>sum)
	    e--;
	    else if(add<sum)
	    s++;
	}
    return res;
}


int main(){
	vector<int> arr  {1,2,3,4,5,6,7,8,9,15};
	int n =arr.size();
	int sum = 18;
	sort(arr.begin(), arr.end());
	int i=0;
	int s,e=n-1;
	int cnt=0;
	cout<< arr[i]<<" ";
    for ( i = 0; i < n; i++)
    {
        s=i+1;
       int  diff=sum-arr[i];
      // cout<<"diff= "<<diff<<endl;
      
        auto p = pairsum(arr,s,e,diff);
        
        if(p.size()!=0){
            
        for(int j=0;j<p.size();j++){
            if(cnt!=2){
            cout<<p[j]<<" ";
            cnt++;
            }
            else{
                cout<<endl;
            cout<< arr[i]<<" ";
            cnt=0;
            j--;
            }
        }
        
        }
        
    }
}
	

