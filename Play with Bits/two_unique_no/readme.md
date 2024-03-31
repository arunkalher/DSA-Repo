# Two Unique Numbers

## Method 1 - Using mulimap
## Mathod 2 - Using multiset

#### [See Unique Number for Method 1 and Method 2](https://github.com/arunkalher/DSA-Repo/tree/main/Play%20with%20Bits/unique_no) 

### Method 3 - Sorting

```C++

#include <iostream>
using namespace std;
#include<algorithm>
#include<vector>
typedef vector<int> VECTOR;

VECTOR two_unique(int* arr,int N)
{   
    VECTOR ans;
    sort(arr,arr+N);
    
    for(int i=1;i<N;i=i+2)
    {
        if(arr[i]!=arr[i-1])
        {
        ans.push_back(arr[i-1]);
        if (ans.size()==2)
        return ans;
        i=i-1;
        }
    }
    ans.push_back(arr[N-1]);
    return ans;
}


int32_t main()
{
     int arr[] = {1,1,2,2,3,3,4,5,5,6};
    int N=sizeof(arr)/sizeof(arr[0]);
   
   VECTOR ans=two_unique(arr,N);
   for(auto ele:ans)
   cout<<ele;

   
}
```
## Time - O(NlogN)
## Space - O(1)

## Method 4 - Using XOR
#### Find xor of all element, we will get xor of two unique elements as a result ( say Xor ), generate a number having only one set bit ( last set bit of Xor ), one unique number will have this bit set , other unset, now initialise two variables as 0 and iterate over array again , numbers having that bit set will be in one bucket , and numbers having unset bit are in another bucket. At last , we will get unique elemets.
```C++

#include <iostream>
using namespace std;
#include<algorithm>
#include<vector>
typedef vector<int> VECTOR;

VECTOR two_unique(int* arr,int N)
{   
    VECTOR ans;
    int Xor=0;
    for(int i=0;i<N;i++)
    Xor^=arr[i];

    int setLastBit=0;
    setLastBit=Xor & ~(Xor-1);
    int a=0;
    int b=0;
    for(int i=0;i<N;i++)
    {
        if(setLastBit & arr[i])
        a^=arr[i];
        else
        b^=arr[i];
        
    }
    ans.push_back(a);
    ans.push_back(b);
    return ans;

}


int32_t main()
{
     int arr[] = {1,1,2,2,3,3,4,5,5,6};
    int N=sizeof(arr)/sizeof(arr[0]);
   
   VECTOR ans=two_unique(arr,N);
   for(auto ele:ans)
   cout<<ele;

   
}
```
## Time - O(N)
## Space - O(1)