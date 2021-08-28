/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
	vector<int> arr = {1,2,3,4,5,6,8};
	int n =arr.size();
	int sum = 7;
	int s=0,e=n-1;
	sort(arr.begin(), arr.end());
	
	while(s<e){
	    int add=arr[s]+arr[e];
	    if(add==sum){
	    cout<<arr[s]<<" "<<arr[e]<<endl;
	    s++;
	    e--;
	    }
	    else if(add>sum)
	    e--;
	    else if(add<sum)
	    s++;
	}
}

