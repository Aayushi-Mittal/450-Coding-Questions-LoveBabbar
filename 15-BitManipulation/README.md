# Bit Manipulation


## Bit and Binary Digits
Bit stands for Binary Digit, a basic and smallest unit of data in a computer. Binary representation is based on 1s and 0s. A Bit represents a logical state with only 2 boolean values, either 0 or 1, as they are a 2 base number. They are the lowest level of language used in machines.

Note: We read binary number from the right to left.

> Bit manipulation is the act of algorithmically manipulating bits using bit-level (bitwise) operations.
> A bitmask is the data used for bitwise operations, particularly in a bit field. Using a mask, bits can be set either on/off or vice versa in a single bitwise operation.

- **Setting a bit** means that if n-th bit is 0, then set it to 1 and if it is 1 then leave it unchanged.
- **Clearing a bit** means that if n-th bit is 1, then clear it to 0 and if it is 0 then leave it unchanged.
- **Toggling a bit** means that if n-th bit is 1, then change it to 0 and if it is 0 then change it to 1.

There are different bitwise operations used in the bit manipulation. These bit operations operate on the individual bits of the bit patterns. Bit operations are fast and can be used in optimizing time complexity. Some common bit operators are:
- NOT(~)
- AND(&)
- OR(|)
- XOR(^)
- LEFT SHIFT(<<)
- RIGHT SHIFT(>>)

### Some Tricks and tactics
1. **Checking if bit at nth position is set or unset:** Left shift '1' to given position and then 'AND'('&').If the result of the AND operation is 1 then the bit at nth position is set otherwise it is unset. 
```
if ((num & (1 << (n - 1))) || ((num >> (n - 1)) & 1))
    cout << "SET";
else
    cout << "NOT SET";
```

2. **Flipping the bits of a number:** It can be done by a simple way, just simply subtract the number from the value obtained when all the bits are equal to 1 .
For example:
```
Number : Given Number
Value  : A number with all bits set in given number, eg. 1111.
Flipped number = Value – Number.
```
3. **Swapping Two Numbers**: We can easily swap two numbers say a and b by using the XOR(^) operator by applying below operations:
```
a ^= b;
b ^= a; 
a ^= b;
```
4. **Toggling a bit at nth position :** If two bits are different then 'XOR' operator returns a set bit(1) else it returns an unset bit(0).
```
num = num ^ 1 << n
```

5. **Unset/clear a bit at n'th position:** 
- First we left shift '1' to n position via (1 << n) than we use bitwise NOT operator '~' to unset this shifted '1'.
- Now after clearing this left shifted '1' i.e making it to '0' we will 'AND'(&) with the number 'num' that will unset bit at nth position position.
```
num = num & ~(1 << n)
```

6. **Set a bit at n'th position:** First we left shift '1' to n position via (1 << n)
Then, use 'OR' operator to set bit at that position.'OR' operator is used because it will set the bit even if the bit is unset previously in binary representation of number 'num'.
```
num = num | 1 << n
```

7. **XOR of all numbers from 1 to N:** 
```
xor = 1^2^3^4^...^N;
If N%4 = 0, then xor will be same as N.
If N%4 = 1, then xor will be 1.
If N%4 = 2, then xor will be N+1.
If N%4 = 3 ,then xor will be 0.
```

8. **How to generate all the possible subsets of a set ?**

Consider a set A of 3 elements.
A = {a, b, c}

Now, we need 3 bits, one bit for each element. 1 represent that the corresponding element is present in the subset, whereas 0 represent the corresponding element is not in the subset. Let’s write all the possible combination of these 3 bits.

0 = (000)2 = {}
1 = (001)2 = {c}
2 = (010)2 = {b}
3 = (011)2 = {b, c}
4 = (100)2 = {a}
5 = (101)2 = {a, c}
6 = (110)2 = {a, b}
7 = (111)2 = {a, b, c}

Implementation:
```
  void possibleSubsets(char A[], int N)
    {
        for(int i = 0;i < (1 << N); ++i)
        {
            for(int j = 0;j < N;++j)
                if(i & (1 << j))
                    cout << A[j] << ‘ ‘;
            cout << endl;
    }
    }
```

## Other usefull tricks
- `(~x)`; one's complement, inverts each and every bit of a number.
- `(~x)+1`; two's complement
- `x & (x-1) = 0`; if x is a power of 2
- `x = x << 1;` Multiplying by 2
- `x = x << n;` Multiplying n times by 2
- `x = x >> 1;`Dividing by 2
- `x = x >> n;`Dividing n times by 2
- `x ^ ( x & (x-1))` , Returns the rightmost 1 in binary representation of x.
- `x & (-x)` , Returns the rightmost 1 in binary representation of x. Eg: x & (-x) = (1010)2 & (0110)2 = (0010)2
- `x | (1 << n)` , Returns the number x with the nth bit set.
- `x & (x-1)` will clear the lowest set bit of x
- `x & ~(x-1)` extracts the lowest set bit of x (all others are clear). Pretty patterns when applied to a linear sequence.
- `x & (x + (1 << n)) = x`, with the run of set bits (possibly length 0) starting at bit n cleared.
- `x & ~(x + (1 << n))` = the run of set bits (possibly length 0) in x, starting at bit n.
- `x | (x + 1) = x` with the lowest cleared bit set.
- `x | ~(x + 1)` = extracts the lowest cleared bit of x (all others are set).
- `x | (x - (1 << n)) = x`, with the run of cleared bits (possibly length 0) starting at bit n set.
- `x | ~(x - (1 << n))` = the lowest run of cleared bits (possibly length 0) in x, starting at bit n are the only clear bits.


## Applications
- Optimization of embedded systems.
- Exclusive-or operator can be used to confirm the integrity of a file.
- Data encryption and compression.
- Networking, framing the packets of numerous bits.
- Digital Image Processors use bitwise operations to enhance image pixels.

### Bitwise And Logical Operators
Now that you have learnt about bitwise operators, you must have realized & is very different from &&. Similarily | is very different from ||
& or | work on integers performing the operator on each corresponding bits. However, && or || work on boolean values ( Any non zero value is true ) to produce a boolean result.

Example :

```
   2  |   1  = 3
   2  ||  1  = true
   2   &  1  =  0
   2  &&  1  = true 
```

### Important Facts about Bitwise Operators
- The left shift and right shift operators cannot be used with negative numbers.
- The bitwise XOR operator is the most useful operator from technical interview perspective. We will see some very useful applications of the XOR operator later in the course.
- The bitwise operators should not be used in place of logical operators.
- The left-shift and right-shift operators are equivalent to multiplication and division by 2 respectively.
- The & operator can be used to quickly check if a number is odd or even. The value of expression (x & 1) would be non-zero only if x is odd, otherwise the value would be zero.

## References
https://www.educative.io/blog/bit-manipulation-algorithm
https://www.interviewbit.com/tutorial/tricks-with-bits/#tricks-with-bits
https://www.interviewbit.com/tutorial/bitwise-and-logical-operators/#bitwise-and-logical-operators
https://practice.geeksforgeeks.org/tracks/dsa-workshop-1-bit-magic/?batchId=308
https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/tutorial/



