```C++

// [Naive Approach] Using Hashing – O(n) time and O(n) auxiliary space
// [Expected Approach-1] Using Sum of N terms Formula – O(n) time and O(1) auxiliary space
// [Expected Approach-2] Using XOR Operation – O(n) time and O(1) auxiliary space

int missingNumber(int N,vector<int> &arr)
{   
    int answer=0;
    for(int i=0;i<arr.size();i++)
    {
        answer^=i+1;
        answer^=arr[i];
    }
    answer^=N;
    return answer;
}
int main()
{
    vector<int> arr = { 1, 2, 3, 5 };
    int n = 5;
    cout << missingNumber(n, arr);
}


```