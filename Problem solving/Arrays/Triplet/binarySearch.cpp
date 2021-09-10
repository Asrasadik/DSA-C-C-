/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
// complexity = O(n^2 logn) 
#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int search (vector <int> a, int l, int r, int x){
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (a[m] == x)
            return m;
  
        if (a[m] < x)
            l = m + 1;

        else
            r = m - 1;
    }
    return 0;
}

int main(){
	vector<int> arr  {1,2,3,4,5,6,7,8,9,15};
	int n =arr.size();
	int s = 18;
	sort(arr.begin(), arr.end());
	int i=0,j=0;
	
	
	for( i =0;i<n;i++){
	    for(j=i+1;j<n;j++){
	        int d=arr[i]+arr[j];
	    int diff = s-d;
	    int f = search(arr,0,n-1,diff);
	    if(f!=0 && (arr[i]<arr[f] && arr[f]<arr[j])){
	    cout<<arr[i]<<" "<<arr[f]<<" "<<arr[j]<<endl;
	    }
	    }
	}
	
}
