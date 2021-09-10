/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> triplets(vector<int> arr,int target_sum){
    sort(arr.begin(),arr.end());
    int n=arr.size();
    vector<vector<int>> result;
    
    for(int i=0;i<=n-3;i++){
        int j=i+1;
        int k=n-1;
        
        while(j<k){
            int current_sum =arr[i];
            current_sum +=arr[j];
            current_sum +=arr[k];
            
            if(current_sum == target_sum){
                result.push_back({arr[i],arr[j],arr[k]});
                j++;
                k--;
            }
            else if(current_sum>target_sum)
            k--;
            else
            j++;
        }
    }
    return result;
}
int main()
{
    	vector<int> arr  {1,2,3,4,5,6,7,8,9,15};
    	int s=18;
    	
    	auto res = triplets(arr,s);
    
        for(auto v: res){
            for(auto no:v){
                cout<<no<<" ";
            }
            cout<<endl;
        }
    return 0;
}

