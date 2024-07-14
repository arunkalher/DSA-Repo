```C++
#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
int getPairsCount(int* arr,int n, int sum)
{   
    int pairs=0;
    sort(arr,arr+n);
    int start=0;
    int end=n-1;
    while(start<end && start<n && end>=0)
    {
        if(arr[start]+arr[end]==sum)
        {
            pairs+=1;
            if(start+1<n && arr[start+1]==arr[start])
            start++;
            else if(end-1>=0 && arr[end-1]==arr[end])
            end--;
            else{
                start++;
                end--;
            }
        }
        else if(arr[start]+arr[end]<sum)
        start++;
        else
        end--;
    }
    return pairs;
}
int main()
{
    int arr[] = { 1, 5, 7, -1, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 6;

    // Function Call
    cout << "Count of pairs is " << getPairsCount(arr, n, sum);
    return 0;
}


```