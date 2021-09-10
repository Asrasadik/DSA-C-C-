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
	vector<int> arr  {1,2,1};
    int i=0,d=0;
    int h=0;
    
    for(int j=0;j<arr.size()-1;j++){
    	//upward
        if(arr[j]<arr[j+1]){ 
            i++;
        }
        //downward
        else if(arr[j]>arr[j+1]){
            d++;
            //cout<<arr[j+1];
          
        }
        //up peak 
        if( arr[j+1]>arr[j+2] and arr[j]<arr[j+1]){
            if(h<i+d)
            {
                h=i+d+1;
                i=0;d=0;
            }
        }
    }
     // cout<<i<<" "<<d;
    if(d!=0 || i!=0)
    cout<<h;
    else
    cout<<"not mountain";
    return 0;
}

