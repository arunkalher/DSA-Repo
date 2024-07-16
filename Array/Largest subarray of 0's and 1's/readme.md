```C++
int maxLen(int arr[], int n)
    {
       int ans=0;
        unordered_map<int,vector<int>> m;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i]==1?arr[i]:-1;
            m[sum].push_back(i);
        }
        
        for(auto it=m.begin();it!=m.end();it++)
        {   
            if (it->second.size()>=2)
            ans=max(ans,it->second[it->second.size()-1]-it->second[0]);
            
        }
        for (int i=0;i<m[0].size();i++)
        ans=max(m[0][i]+1,ans);
        return ans;
    }

    int maxLen(int arr[], int n)
    {
        int ans=0;
        unordered_map<int,int> m;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i]==1?arr[i]:-1;
            if(sum==0)ans=max(ans,i+1);
            if(m[sum])
            ans=max(ans,i-m[sum]+1);
            else
            m[sum]=i+1;
        }
        
       
        return ans;
    }

```