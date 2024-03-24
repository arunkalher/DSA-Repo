

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