```C++
bool find2Numbers(int* arr,int n,int sum,int curr)
    {   
        int start=0;
        int end=n-1;
        while(start<end)
        {
            if (start==curr)
            start+=1;
            
            else if(end==curr)
            end=end-1;
           
            else if(arr[start]+arr[end]==sum)
            return true;
            else if (arr[start]+arr[end]>sum)
            end=end-1;
            else
            start=start+1;
            
        }
        return false;
        
    }
    // Should return true if there exists a triplet in the
    // array arr[] which sums to x. Otherwise false
    bool find3Numbers(int arr[], int n, int x) {
        // Your Code Here
        sort(arr,arr+n);
        for(int i=0;i<n;i++)
        {
            if(find2Numbers(arr,n,x-arr[i],i))
            return true;
            
        }
        return false;
    }

```