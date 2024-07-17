```C++
int Occ(int* arr,int ele,int n)
    {
        int ans=0;
        for(int i=0;i<n;i++)
        if(arr[i]==ele)
        ans++;
        return ans;
    }
    int majorityElement(int arr[], int n)
    {
        
        int ans=0,curr=0;
        for(int i=0;i<n;i++)
        {
            if(curr==0)
            {
                ans=arr[i];
                curr=1;
                continue;
            }
            if(ans==arr[i])
            curr++;
            else
            curr--;
        }
        
        int occ=Occ(arr,ans,n);
        return (occ> n/2)?ans:-1;
    
        
        
    }
```