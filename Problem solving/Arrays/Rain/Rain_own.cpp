/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
// O(2n) == O(n) 
#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

vector<int> peak(vector<int> arr){
    vector<int> p;
    for(int j=0;j<arr.size()-1;j++){
        if(j==0 and arr[j]>arr[j+1])
            p.push_back(j);
        else if( arr[j+1]>arr[j+2] and arr[j]<arr[j+1]){
            p.push_back(j+1);
        }
    }
    return p;
}

int main()
{
    vector<int> arr  {1,0,2,1,0,1,3,2,1,2,1};
    auto p = peak(arr);
    int e,m,diff,fi,li;
    int sum=0;
    for(int i=0;i<p.size()-1;i++){
        fi=p[i];
        li=p[i+1];
        e=arr[p[i]];
        m=min(arr[fi],arr[li]);
        int k=fi;
        while(k<=li){
            diff=m-arr[k];
            if(diff>0){
                sum=sum+diff;
            }
            k++;
            
        }
        
    }
    cout<<sum<<" ";
    return 0;
}

