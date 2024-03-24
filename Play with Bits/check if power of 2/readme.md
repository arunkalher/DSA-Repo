
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
bool isPowerOfTwo(int n)
{
    int cnt = 0;
    while (n > 0) {
        if ((n & 1) == 1) {
            cnt++;
        }
        if(cnt>1)
        return false;

        n = n >> 1;
    }
    if(cnt==1)
    reurn true;
    else
    return false;
    
}
```

### Time Complexity: O(logN)
### Auxiliary Space: O(1)

```C++
bool isPowerOfTwo(int x)
{
    return (x & (x - 1))==0;
}
```

### Time Complexity: O(1)
### Auxiliary Space: O(1)