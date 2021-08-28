/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
vector<int> pairsum(vector<int> arr,int sum ){
    unordered_set<int> s;
    vector<int> res;
    for(int i=0;i<arr.size();i++){
        int x = sum-arr[i];
        if(s.find(x) != s.end()){
            res.push_back(x);
            res.push_back(arr[i]);
            return res;
        }
        s.insert(arr[i]);
    }
    
}
int main(){
	vector<int> arr  {10,5,2,3,-6,9,11};
	int s = 4;
	auto p = pairsum(arr,s);
	if(p.size()==0)
	cout<<p[0]<<"No such pair";
	else
	cout<<p[0]<<","<<p[1]<<endl;
	
	return 0;
	
}
