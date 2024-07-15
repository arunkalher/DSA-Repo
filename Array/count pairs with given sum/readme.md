```C++
/ Count pairs with given sum using Binary Search.
// serach for sum-arr[i] values NlogN,1
int FirstOccurance(int* arr,int start,int end,int n, int target)
{

   while(start<=end)
   {
      int mid=start+(end-start)/2;
      if((mid==start || arr[mid-1]<target ) && arr[mid]==target )
      return mid;
      
      else if(arr[mid]<target)
      start=mid+1;
      else
      end=mid-1;
   }

   return -1;
}
int lastOccurance(int* arr,int start,int end, int n,int target)
{  
  
   while(start<=end)
   {
      int mid=start+(end-start)/2;
      if((mid==end || arr[mid+1]>target ) && arr[mid]==target )
      return mid;
      
      else if(target < arr[mid])
      end=mid-1;
      else
      start=mid+1;
   }

   return -1;



}
// other  implementation
int find_last_occurance2(int arr[],int n,int x)
    {
        int to_return=-1;
        int start=0,end=n-1;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(arr[mid]<=x)
            {   if (arr[mid]==x)
                to_return=mid;
            start=mid+1;
            }
            else
            end=mid-1;
        }
        return to_return;
    }
int getPairsCount(int* arr,int n, int sum)
{   
    int pairs=0;
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
      
      int lastOcc=lastOccurance(arr,i+1,n-1,n,sum-arr[i]);
      if(lastOcc!=-1)
      {
         int firstOcc=FirstOccurance(arr,i+1,n-1,n,sum-arr[i]);
         cout<<firstOcc<<" "<<lastOcc<<" "<<lastOcc-firstOcc+1<<"\n";
         pairs=pairs+(lastOcc-firstOcc)+1;
      }
      
    }
    return pairs;
    
    
}
// hashing N,N
int getPairsCount2(int* arr,int n, int sum)
{   
    int pairs=0;
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++)
    {
      if(mp.find(sum-arr[i])!=mp.end())
      pairs+=mp[sum-arr[i]];

      // or just
      // pairs+=mp[arr[i]-sum]
      mp[arr[i]]++;

    }
    return pairs;
    
}
int main()
{
    int arr[] = { 1,1,1,1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 2;

    // Function Call
    cout << "Count of pairs is " << getPairsCount(arr, n, sum);
    return 0;
}
```