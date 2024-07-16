```C++

int findMin(int arr[], int n) {
        int ans=INT_MAX;
        int start=0;
        int end=n-1;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            
                if(arr[mid]==arr[start] && arr[mid]==arr[end])
                {
                    ans=min(ans,arr[mid]);
                    end--;
                    start++;
                }
                else if(arr[mid]<arr[end])
                {
                    ans=min(ans,arr[mid]);
                    end=mid;
                }
                else{
                    start=mid+1;
                }
            
        }
        return ans;
    }

```