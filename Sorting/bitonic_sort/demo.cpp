#include <iostream>

using namespace std;

template <typename t>
void Swap(t &a, t &b)
{

    t temp = a;
    a = b;
    b = temp;
}
void merge(int *arr, int start, int N, int dir)
{
    if (N <= 1)
        return;
    for (int i = start; i < start + N / 2; i++)
    {
        // dir is involved while swappping ,
        // if left one is larger and we
        // are working for increasing
        // then condn will be 1 and swap will occur

        if (dir == (arr[i] > arr[i + N / 2]))
            Swap(arr[i], arr[i + N / 2]);
    }

    merge(arr, start, N / 2, dir);
    merge(arr, start + N / 2, N / 2, dir);
}
void bitonicSort(int *arr, int start, int N, int dir)
{
    if (N <= 1)
        return;
    bitonicSort(arr, start, N / 2, 1);
    bitonicSort(arr, start + N / 2, N / 2, 0);
    merge(arr, start, N, dir);
}
int32_t main()
{
    int arr[] = {1, 3, 7, 5, 2, 4, 8, 6};
    bitonicSort(arr, 0, sizeof(arr) / sizeof(arr[0]), 1);
    // 1 for ascending

    for (auto i : arr)
        cout << i;
    // 12345678
}
