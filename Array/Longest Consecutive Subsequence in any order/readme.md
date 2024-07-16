```C++
// use sorting and then count 
// or set
 int findLongestConseqSubseq(int arr[], int N)
    {
      unordered_set<int> S;
      for(int i=0;i<N;i++)
      S.insert(arr[i]);
      int ans=0;
      for(int i=0;i<N;i++)
      {
          if(S.find(arr[i]-1)==S.end())
          {

              int k=1;
              while(S.find(arr[i]+k)!=S.end())
              {
                  k++;
              }
              ans=max(ans,k);
          }
      }
      return ans;
    }
```