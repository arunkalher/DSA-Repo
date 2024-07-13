```C++
template <typename T>
void reverse(int startIndex,int endIndex,vector<T>& arr)
{
    while(startIndex<=endIndex)
    {
        T temp=arr[startIndex];
        arr[startIndex]=arr[endIndex];
        arr[endIndex]=temp;
        startIndex++;
        endIndex--;
    }
    
}
class Solution {
  public:
    void rotate(vector<int> &arr) {
        reverse<int>(0,arr.size()-1,arr);
        int itemsToRotate=1;
        reverse(itemsToRotate,arr.size()-1,arr);
        
        
    }
};

// TC-=N
// SC- None
```