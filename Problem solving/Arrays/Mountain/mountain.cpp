/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int mount(vector<int> arr){
	int n=arr.size();
	int large=0;
	for(int i=1;i<=n-2;){
	    //check for peak
	    if(arr[i]>arr[i-1] and arr[i]>arr[i+1]){
	   int cnt=1;
	    int j=i;
	    //backward
	    while(j>=1 and arr[j]>arr[j-1] ){
	        j--;
	        cnt++;
	    }
	    //forward
	    while(i<=n-2 and arr[i]>arr[i+1]){
	        i++;
	        cnt++;
	    }
	    large= max(large,cnt);
	    }
	   
        else{
            i++;
        }
        
	}
	return large;
}

int main(){
		vector<int> arr  {5,6,1,2,3,4,5,4,3,2,0,1,2,3,-2,4};
		
		cout<<mount(arr);
		
		return 0;
		
}
