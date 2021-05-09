//Find the maximum and minimum element in an array
#include <iostream>
using namespace std;

int main() {
	//code
		int a[] = { 1000, 11, 445,1, 330, 3000 };
	int n=6;
	int i;
	int min;
	int max=min=a[0];

	for(i=1;i<n;i++){
	    if(a[i]<min)
	    min=a[i];
	    else if (a[i]>max)
	    max=a[i];

	}
    cout<<min<<" "<<max;
//printf("%d %d",min,max);
	return 0;
}
