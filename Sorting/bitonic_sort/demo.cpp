#include <iostream>

using namespace std;

void merge(int *arr, int start, int end, int mid)
{
    if (start >= end)
        return;
    int n1 = mid - start + 1;
    int n2 = end - mid;

    int *temp1 = new int[n1];
    int *temp2 = new int[n2];
    for (int i = start; i <= mid; i++)
        temp1[i - start] = arr[i];

    for (int i = mid + 1; i <= end; i++)
        temp2[i - mid - 1] = arr[i];

    int leftArrayIndex = 0;
    int rightArrayIndex = 0;
    int currIndex = start;
    while (leftArrayIndex < n1 && rightArrayIndex < n2)
    {

        if (temp1[leftArrayIndex] < temp2[rightArrayIndex])
        {
            arr[currIndex] = temp1[leftArrayIndex];
            leftArrayIndex++;
        }
        else
        {
            arr[currIndex] = temp2[rightArrayIndex];
            rightArrayIndex++;
        }
        currIndex++;
    }

    while (leftArrayIndex < n1)
    {
        arr[currIndex] = temp1[leftArrayIndex];
        leftArrayIndex++;
        currIndex++;
    }

    while (rightArrayIndex < n2)
    {
        arr[currIndex] = temp2[rightArrayIndex];
        rightArrayIndex++;
        currIndex++;
    }
    delete[] temp1;
    delete[] temp2;
}
void mergeSort(int *arr, int start, int end)
{
    if (start >= end)
        return;
    int mid = start + (end - start) / 2;
    mergeSort(arr, start, mid);
    mergeSort(arr, mid + 1, end);
    merge(arr, start, end, mid);
}
int32_t main()
{
    int arr[] = {1, 3, 7, 5, 2, 4, 8, 6};
    mergeSort(arr, 0, sizeof(arr) / sizeof(arr[0]) - 1);
    for (auto i : arr)
        cout << i;
    // 12345678
}
