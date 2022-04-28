```c++
 int sum(int a , int b)
 {
    a = a ^ b;             // At least one of the bits is not set
    int carry = a & b;     // carry now contains common set bits of a and b
    b = carry << 1;        // Carry is shifted by one, so that adding it to a gives the required sum
      
    if (carry == 0) return a;         
    else return sum(a, b);  
 }
```
```
 999
 + 1
 ---
1000

5 + 3 = 8
5 - 00101
3 - 00011

Step 01:
carry = 5&3 = 00001 = 1
a = 5^3 = 00110 = 5
b = carry << 1 = 00010 = 2

Step 02:
carry = a&b = 00010 = 2
a = a^b = 00100 = 4
b = carry << 1 = 00100 = 4

Step 03:
carry = a&b = 00100 = 4
a = a^b = 00000 = 0
b = carry << 1 = 01000 = 8

Step 03:
carry = a&b = 00000 = 0
a = a^b = 01000 = 8
b = carry << 1 = 00000 = 0

return a (2^3 = 8)
```
[this](https://www.youtube.com/watch?v=q23uhJw1Fko&ab_channel=Let%27sPracticeTogether)

#### Problem 
https://practice.geeksforgeeks.org/problems/sum-of-two-numbers-without-using-arithmetic-operators/1/?track=md-bm
