
# Quick Sort

### QuickSort is a sorting algorithm based on the Divide and Conquer algorithm that picks an element as a pivot and partitions the given array around the picked pivot by placing the pivot in its correct position in the sorted array.

#### pivot can be -
#### first element
#### last element
#### middle element
#### any element

### let's pick last element 

```C++
void quickSort(int arr[], int low, int high)
    {
       
        if(high<=low)
        return;
        int p=partition(arr,low,high);
        
        quickSort(arr,low,p-1);
        quickSort(arr,p+1,high);
    }
    
    public:
    int partition (int arr[], int low, int high)
    {
       int ans=low-1;
       while(low<high)
       {
           if(arr[low]<arr[high])
           {
               ans++;
               int t=arr[low];
               arr[low]=arr[ans];
               arr[ans]=t;
           }
           low++;
           
       }
       ans++;
       int t=arr[high];
       arr[high]=arr[ans];
       arr[ans]=t;
       
       return ans;
       
    }


```



### Time Complexity-
#### Best Case: Ω (N log (N))
#### The best-case scenario for quicksort occur 
#### when the pivot chosen at the each step divides
#### the array into roughly equal halves.
#### In this case, the algorithm will
#### make balanced partitions, leading to efficient Sorting.

#### Average Case: θ ( N log (N))
#### Quicksort’s average-case performance is usually very good in #### practice, making it one of the fastest sorting Algorithm.

#### Worst Case: O(N2)
#### The worst-case Scenario for Quicksort occur when the 
#### pivot at each step consistently results in highly unbalanced partitions. 
####  When the array is already sorted and the pivot is always chosen as the smallest
####   or largest element. To mitigate the worst-case Scenario, various 
####   techniques are used such as choosing a good pivot 
####   (e.g., median of three) and using Randomized 
####   algorithm (Randomized Quicksort ) to shuffle
####    the element before sorting.


### Space - O(N) - worst case stack space
### O(logN) - best and avg case
