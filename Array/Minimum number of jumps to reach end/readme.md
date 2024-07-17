```C++
int minJumps(int arr[], int n){
       if(n==1)
       return 0;
        if(arr[0]==0)
        return -1;
        int start=0;
        int jumps=0;
        int end=0;
        while(end<n-1)
        {   
            int maxi=0;
            for(int i=start;i<=end;i++)
            if(i+arr[i]>maxi)
            maxi=i+arr[i];
            if(maxi==end)
            return -1;
            start=end+1;
            end=maxi;
            jumps++;
            
        }
        return jumps;
        
    }
```