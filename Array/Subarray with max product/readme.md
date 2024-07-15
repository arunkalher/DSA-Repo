```C++
long long maxProduct(vector<int> arr, int n) {
	    ll pre=1,suff=1,ans=INT_MIN;
	    for(int i=0;i<n;i++)
	    {
	        if(pre==0)
	        pre==1;
	        if(suff==0)
	        suff=1;
	        pre=pre*arr[i];
	        suff=suff*arr[n-1-i];
	        ans=max(ans,max(pre,suff));
	        
	    }
	    return ans;
	}

```