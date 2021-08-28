#include <iostream> nlogn  
#include <vector>
using namespace std;

int main(){
	vector<int> arr = {10,5,2,3,-6,9,11};
	int n =arr.size();
	int s = 4;
	
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]+arr[j]==s){
			cout<<arr[i]<<" "<<arr[j];
			break;
		}
		}
	}
}

int search (vector<int> a, int l, int r, int x){
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (a[m] == x)
            return m;
  
        if (a[m] < x)
            l = m + 1;

        else
            r = m - 1;
    }
    return -1;
}

int main(){
	vector<int> arr = {10,5,2,3,-6,9,11};
	int n =arr.size();
	int s = 4;
	sort(arr.begin(), arr.end());
	
	for(int i =0;i<n;i++){
	    int diff = s-arr[i];
	    cout<<diff<<endl;
	    int f = search(arr,0,n-1,diff);
	    if(f){
	    cout<<arr[i]<<" "<<arr[f];
	    break;
	    }
	}
	
}
