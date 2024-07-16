```C++
long long max_sum(int arr[], int n) {
        
        ll sum=0;
        ll curr=0;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            curr+=arr[i]*long(i);
        }
        ll ans=curr;
        for(int i=0;i<n-1;i++)
        {
            curr=curr + arr[i]*long(n-1) -( sum - arr[i]);
           
            ans=max(curr,ans);
        }
        return ans;
    }
```