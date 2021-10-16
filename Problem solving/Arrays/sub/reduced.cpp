/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int largestBand(vector<int> arr){
    int n = arr.size();
    unordered_set<int> s;
    //data inside a set
    for(int x : arr){
        s.insert(x);
    }
    
    //iterate over arr
    int largestlen =1;
    for(auto element : s){
        int parent = element-1;
        
        if(s.find(parent)==s.end()){//not present
            int next_no=element+1;
            int cnt=1;
             while(s.find(next_no)!=s.end()){
            next_no++;
            cnt++;
        }
         if(largestlen<cnt){
            largestlen=cnt;
        }
    }
        }
       
       
    return largestlen;
}

int main()
{
    vector<int> arr{1,9,3,0,18,5,2,4,10,7,12,6};
    cout<<largestBand(arr);
    
    

    return 0;
}

