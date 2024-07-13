```C++

int firstRepeating(int* arr,int n)
{       
    unordered_map<int,int> hash;
        // initialized with 0 by default
        
        for(int i = 0; i < n; i++){
            hash[arr[i]]++;
        }
        
        for(int i = 0; i < n;i++){
            if(hash[arr[i]]> 1){
                return i+1;
            }
        }
        return -1;
}

```