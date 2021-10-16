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
	vector<int> arr {1,2,3,4,5,7};// {1,9,3,0,18,5,2,4,10,7,12,6};
    
      unordered_set<int> s;
      int cnt=0,head,pc=0;
       int d;
 
        for(int i=0;i<arr.size();i++){
            s.insert(arr[i]);
        }
        
    for(int i=0;i<arr.size();i++){
         d=arr[i]-1;
        if(d >=-1){
            if(s.find(d) == s.end()){ //if not present
                head=arr[i];
                cnt=1;
            }
            else{
                continue;
            }
            int succ = arr[i]+1;
           
            while(s.find(succ)!=s.end()){
                 
                cnt++;
                succ =succ+1;
                 
            }
             
           
            if(pc<cnt){
            pc=cnt;
            cnt=1;
        }
        }
        
    }
    cout<<pc;
    return 0;
}

