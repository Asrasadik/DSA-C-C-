/**************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

***************************/

#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

//Time complexity = O(n^3)
int main(){
	vector<int> arr  {1,2,3,4,5,6,7,8,9,15};
	int n =arr.size();
	int s = 18;
	sort(arr.begin(), arr.end());
	int i=0,j=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            for (int k = i+2; k < n; k++)
            {
                    if (arr[i] + arr[j] + arr[k] == s)
                    {
                        if(arr[i]<arr[j] && arr[j] <arr[k])
                       cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
                    }
            }
        }
    }
}
