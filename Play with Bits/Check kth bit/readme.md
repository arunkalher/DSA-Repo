
# Check kth bit set or not

```C++
bool isKthBitSet(int n, int k)
{
    if (n & (1 << k))
        return true;
    
    return false;
}

```

```C++
bool isKthBitSet(int n, int k)
{
    if ((n >> k) & 1)
        return true;
    
    return false;
}
```

### Time Complexity: O(1)
### Auxiliary Space: O(1)