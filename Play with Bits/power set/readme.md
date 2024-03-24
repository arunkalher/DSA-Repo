
## Power Set
### suppose we have [1,2,3] array , we can think of using bit manipulation let's take binary numbers from 0 to 2^3-1
### 0 000 =>[ , , ]
### 1 001 =>[ , ,3]
### 2 010 =>[ ,2, ]
### 3 011 =>[ ,2,3]
### 4 100 =>[1, , ]
### 5 101 =>[1, ,3]
### 6 110 =>[1,2, ]
### 7 111 =>[1,2,3]

### we can loop  i from 0 to 2^N-1 and 
### check for sets bits in i, the elements
### corresponding to set bit will be included.

```C++
#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> printAllsubsets(int arr[],int N)
{   
    vector<vector<int>> ans;
   for(int i=0;i<(1<<N);i++)
   {
    vector<int> temp;
    for(int j=0;j<N;j++)
    {
        if(i&1<<j)
        temp.push_back(arr[j]);
           
       
    }
    ans.push_back(temp);
    
   }
   return ans;
}
int main()
{   
   
    int arr[]={1,2,3};
    vector<vector<int>> ans;
    ans=printAllsubsets(arr,3);
    for(auto i:ans)
    {
        for (auto j:i)
        {
            cout<<j<<" ";
        }
        
        cout<<"\n";
    }

}

```

### T=2^n * n
### S=2^n * n
### wecan use recursion also , tc wil be nearly same but space c will be higher due to stack.