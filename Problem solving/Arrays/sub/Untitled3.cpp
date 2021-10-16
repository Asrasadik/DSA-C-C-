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
	vector<int> arr  {1,9,3,0,18,5,2,4,10,7,12,6};
	sort(arr.begin(),arr.end());
	int n=arr.size();
	int ccnt=0,pc=0;
	for(int i=0;i<n-1;i++){
	    if(arr[i+1]-arr[i]==1){
	        ccnt++;
	    }
	   else if(ccnt>pc){
	       pc=ccnt;
	       ccnt=0;
	   }
	}
	cout<<pc;
    return 0;
}

