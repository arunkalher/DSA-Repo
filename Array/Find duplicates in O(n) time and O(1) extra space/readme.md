```C++

#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
vector<int> repeating(int* arr,int n)
{       
    vector<int> answer;
    for(int i=0;i<n;i++)
    arr[arr[i]%n]+=n;
    for(int i=0;i<n;i++)
    if(arr[i]/n >=2)
    answer.push_back(i);
    return answer;
}
int main() 
{ 
    int arr[] = { 1, 6, 3, 1, 3, 6, 6}; 
    int arr_size = sizeof(arr) / sizeof(arr[0]); 
  
    cout << "The repeating elements are: \n"; 
  
    // Function call 
    vector<int> ans=repeating(arr, arr_size); 
    for(auto ele:ans)
    cout<<ele<<" ";
    
}

```