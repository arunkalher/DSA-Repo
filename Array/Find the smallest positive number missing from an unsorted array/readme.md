```C++

 int missingNumber(int arr[], int n) 
    { 
        bool found=false;
        for(int i=0;i<n;i++)
        {   
            if(arr[i]==1)
            found=true;
            
            if(arr[i]<=0 || arr[i]>n)
            arr[i]=1;
        }
        if (!found)
        return 1;
        
        for(int i=0;i<n;i++)
        arr[(arr[i]-1)%(n+1)]+=n+1;
        
        for(int i=0;i<n;i++)
        if(arr[i]/(n+1) <1)
        return i+1;
        
        return n+1;
    } 
```