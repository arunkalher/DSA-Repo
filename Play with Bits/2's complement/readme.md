
# Two's Complement

### Two's complement is the most common method of representing signed (positive, negative, and zero) integers on computers,and more generally, fixed point binary values. 
### Two's complement uses the binary digit with the greatest place value as the sign to indicate whether the binary number is positive or negative. When the most significant bit is 1, the number is signed as negative; and when the most significant bit is 0 the number is signed as positive.

### Unlike the ones' complement scheme, the two's complement scheme has only one representation for zero. Furthermore, arithmetic implementations can be used on signed as well as unsigned integers and differ only in the integer overflow situations.

## Procedure
### The two's complement of an integer is computed by:

### Step 1: starting with the binary representation of the number, with the leading bit being a sign bit;
### Step 2: inverting (or flipping) all bits – changing every 0 to 1, and every 1 to 0;
### Step 3: adding 1 to the entire inverted number, ignoring any overflow. Accounting for overflow will produce the wrong value for the result.

### For example, to calculate the decimal number −6 in binary from the number 6:

### Step 1: +6 in decimal is 0110 in binary; the leftmost significant bit (the first 0) is the sign (just 110 in binary would be -2 in decimal).
### Step 2: flip all bits in 0110, giving 1001.
### Step 3: add the place value 1 to the flipped number 1001, giving 1010.

### To verify that 1010 indeed has a value of −6, add the place values together, but subtract the sign value from the final calculation. Because the most significant value is the sign value, it must be subtracted to produce the correct result: 1010 = −(1×23) + (0×22) + (1×21) + (0×20) = 1×−8 + 0 + 1×2 + 0 = −6.


### let's take our register is 4bit and we want to store signed int
### range we can store is -(2^3) to (2^3-1)

### msb (most significant bit)
###  negative no | msb1 | msb0 | positive no | repr
###  -8 | 1 |  0 | 0 | 000
###  -7 | 1 |  0 | 1 | 001
###  -6 | 1 |  0 | 2 | 010
###  -5 | 1 |  0 | 3 | 011
###  -4 | 1 |  0 | 4 | 100
###  -3 | 1 |  0 | 5 | 101
###  -2 | 1 |  0 | 6 | 110
###  -1 | 1 |  0 | 7 | 111

### 1 will be stored as 0001 , -1 as 1111 ( 2's complement of 1).

### so what will 1011 will represent - take two's compliment=0101=5 so 1001 will represent -5.
### or 1011=(2^0) X 1+(2^1) X 1+((-2^3) X 1)=1+2-8=-5 ( -ve beacuse msb is 1)


