/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//O(nlogn)
#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr {0,14,15,25,6,7,30,5,41,42};
    int n=arr.size();
    auto a = arr;
    sort(a.begin(),a.end());
    int s,e;
    for(int i=0;i<n;i++){
        if(arr[i]!=a[i]){
            s=i;
            break;
        }
        
    }
    for(int i=n-1;i>=0;i--){
        if(arr[i]!=a[i])
        {
            e=i;
            break;
        }
    }
    cout<<s<<" "<<e;
    return 0;
}

