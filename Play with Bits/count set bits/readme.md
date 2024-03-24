
# Check if power of 2

## Method 1
```C++
bool isPowerOfTwo(int n)
{
    if (n == 0)
        return 0;
    while (n != 1) {
        if (n % 2 != 0)
            return 0;
        n = n / 2;
    }
    return 1;
}
```
### Time Complexity: O(log N)
### Auxiliary Space: O(1)

## Method 1
```C++
unsigned int countSetBits(unsigned int n)
{
    unsigned int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}
```

### Time Complexity: O(logN)
### Auxiliary Space: O(1)

```C++
int countSetBits(int n)
{
    // base case
    if (n == 0)
        return 0;
    else
       
        return (n & 1) + countSetBits(n >> 1);
}
 
```
## Brian Kernighan’s Algorithm: 
### Subtracting 1 from a decimal number flips all the bits after the rightmost set bit(which is 1) including the rightmost set bit. 

```C++
unsigned int countSetBits(int n)
    {
        unsigned int count = 0;
        while (n) {
            n &= (n - 1);
            count++;
        }
        return count;
    }
```


### Time Complexity: O(logN)
### Auxiliary Space: O(1)

## Using Lookup table

```C++

int BitsSetTable256[256];

void initialize() 
{ 
    BitsSetTable256[0] = 0; 
    for (int i = 0; i < 256; i++)
    { 
        BitsSetTable256[i] = (i & 1) + 
        BitsSetTable256[i / 2]; 
    } 
} 
 

int countSetBits(int n) 
{ 
    return (BitsSetTable256[n & 0xff] + 
            BitsSetTable256[(n >> 8) & 0xff] + 
            BitsSetTable256[(n >> 16) & 0xff] + 
            BitsSetTable256[n >> 24]); 
} 
 
int main() 
{ 
    initialize(); 
    int n = 9; 
    cout << countSetBits(n);
} 
 
```

### Time Complexity: O(1)
### Auxiliary Space: O(1)