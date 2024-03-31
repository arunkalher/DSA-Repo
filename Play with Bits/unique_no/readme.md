# Unique element in an array where all elements occur k times except one


## Method1- Hashing

```C++
#include <iostream>
#include<unordered_map>
using namespace std;
int unique(int* arr,int N)
{
    unordered_map<int,int> m;
    for(int i=0;i<N;i++)
    m[arr[i]]++;

    for(auto it=m.begin();it!=m.end();it++)
    {
        if(it->second==1)
        return it->first;
    }

    return -1;

}


int32_t main()
{
    int arr[] = {2,2,2,3,3,3,4,5,4,4};
    int N=sizeof(arr)/sizeof(arr[0]);
   
    cout<<unique(arr,N);
   
}
```

## Time - O(N)
## Space - O(N)

## Method - 2

```C+++
#include <iostream>
#include<unordered_map>
using namespace std;
int unique(int* arr,int N,int k)
{
    int bits=8*sizeof(arr[0]);
    int* counts=new int[bits];
    for(int i=0;i<bits;i++)
    {
        counts[i]=0;
        for(int j=0;j<N;j++)
        {
            if( 1<<i & arr[j])
            counts[i]++;
        }
    }
    int answer=0;
    for(int i=0;i<bits;i++)
    {
        if(counts[i]%k!=0)
        answer=1<<i | answer;
    }
    delete[] counts;
    return answer;
}


int32_t main()
{
    int arr[] = {2,2,3,3,2,3,6,6,6,7,8,8,8};
    int N=sizeof(arr)/sizeof(arr[0]);
   
    cout<<unique(arr,N,3);
   
}

```


## Time - O(N*8*sizeof(int))
## Space - O(1)

#### If k is even , then we can use xor operator

```C+++
#include <iostream>
#include<unordered_map>
using namespace std;
int unique(int* arr,int N)
{   
    int answer=0;
    for(int i=0;i<N;i++)
    {
        answer^=arr[i];
    }
    return answer;
}


int32_t main()
{
    int arr[] = {2,2,3,3,2,3,6,6,6,7,8,8,8,2,3,6,8};
    int N=sizeof(arr)/sizeof(arr[0]);
   
    cout<<unique(arr,N);
   
}

```
## Time - O(N)
## Space - O(1)