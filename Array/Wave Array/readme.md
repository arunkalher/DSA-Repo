```C++

 void swap(int* a,int *b)
    {
        int temp=*a;
        *a=*b;
        *b=temp;
    }
    void convertToWave(int n, vector<int>& arr){
        
        for(int i=0;i<n-1;i++)
        {   
            // if(i%2)
            // {   
            //     //odd->lesser equal //never
            //     if(arr[i]>arr[i+1])
            //     swap(&arr[i],&arr[i+1]);
                
            // }
            if(!(i%2)){
               
                //even->greater equal
                // if(arr[i]<arr[i+1]) //always
                swap(&arr[i],&arr[i+1]);
            }
        }
        
    }
```