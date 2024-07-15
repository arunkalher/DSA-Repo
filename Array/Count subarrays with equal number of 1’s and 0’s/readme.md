```C++
long long int countSubarrWithEqualZeroAndOne(int arr[], int n)
    {
        ll ans=0;
        unordered_map<int,int> m;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i]==1?arr[i]:-1;
            m[sum]++;
        }
        
        for(auto it=m.begin();it!=m.end();it++)
        {   
           
            ans+=(it->second)*((it->second)-1)/2;
        }
        ans+=m[0];
        return ans;
        
    }

```