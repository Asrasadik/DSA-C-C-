//Find the "Kth" max and min element of an array

// Count sort which is O(n)

int maxi(int a[],int n){
    int i;
	int max=a[0];
	
	for(i=1;i<n;i++){
	    if (a[i]>max)
	    max=a[i];
	}
	return max;
}
int kthSmallest(int arr[], int l, int r, int k)
    {
       
        //int n= sizeof(arr)/sizeof(arr[0]);
         int m=maxi(arr,r);
         int *c;
         c=new int[m+1];
       int i,j;
        for(i=0;i<m+1;i++){
            c[i]=0;
        }
     for(i=0;i<r+1;i++){
            c[arr[i]]++;
        }
        i=0;j=0;
         while(i<m+1){
            if(c[i]>0){
                arr[j++]=i;
                c[i]--;
            }
            else
            i++;
    }
    if(k>r+1){
        k=k%r;
    }
return arr[k-1];
}

