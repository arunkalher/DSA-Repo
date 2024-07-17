```C++
string isSubset(int arr1[], int arr2[], int n, int M) {
    unordered_map<int,int> m;
    for(int i=0;i<n;i++)
    m[arr1[i]]++;
    for(int i=0;i<M;i++)
    {
        if(!m[arr2[i]])
    return "No";
    m[arr2[i]]--;
    }
    return "Yes";
    
}
```