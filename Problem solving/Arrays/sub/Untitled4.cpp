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
	vector<int> arr  {1,18,3,19,6,20,8,21,7,22};
	sort(arr.begin(),arr.end());
	int n=arr.size();
	int ccnt=1,pc=0;
	for(int i=0;i<n-1;i++){
	    if(arr[i+1]-arr[i]==1){
	        ccnt++;
	       
	    }
	    else if(arr[i+1]-arr[i]!=1){
	        pc=ccnt;
	        ccnt=1;
	    }
	   pc=max(pc,ccnt);
	   
	  
	}
	 cout<<pc;
    return 0;
}

