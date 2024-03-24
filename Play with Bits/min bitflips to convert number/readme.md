
# Check kth bit set or not

```C++
int countsetbits(int n)
    {
        int count=0;
        while(n)
        {
            n&=n-1;
            count+=1;
        }
        return count;
    }
    public:
    // Function to find number of bits needed to be flipped to convert A to B
    int countBitsFlip(int a, int b){
        
        return countsetbits(a^b);
        
        
    }

```

### Time Complexity: O(log(a^b))
### Auxiliary Space: O(1)