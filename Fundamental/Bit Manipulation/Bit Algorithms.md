### Bit Manipulation
```
Bit : A bit (short for binary digit) is the smallest unit of data in a computer. A bit has a single binary value, either 0 or 1.
There are different bitwise operations used in the bit manipulation. Bit operations are fast and can be used in optimizing time 
complexity.

NOT ( ~ )
AND ( & )
OR ( | )
XOR ( ^ )
Left Shift ( << )
Right Shift ( >> )
```

```
11        odd      1
11/2 = 5  odd      1
5/2 = 2   even     0
2/2 = 1   odd      1
1/2 = 0

So binary(11) = 1101
7 -> (MSB)1101(LSB)
```

### Subset Pattern
```
3 2 1 0                                ⇒ power of 2
0 0 0 0 = 0 // took no one
0 0 0 1 = 1 // took power 0            ⇒ 2^0 = 1
0 0 1 0 = 2 // took power 1            ⇒ 2^1 = 2
0 0 1 1 = 3 // took power 1 and 0      ⇒ 2^0 + 2^1 = 3
0 1 0 0 = 4 // took power 2            ⇒ 2^2 = 4
0 1 0 1 = 5 // took power 2 and 0      ⇒ 2^0 + 2^2 = 5
0 1 1 0 = 6 // took power 2 and 1      ⇒ 2^1 + 2^2 = 6
0 1 1 1 = 7 // took power 2, 1 and 0   ⇒ 2^0 + 2^1 + 2^2 = 7
```
### 
![image](https://user-images.githubusercontent.com/59710234/158048747-d36df750-5db8-4be8-a58c-c80b5135ef9f.png)

### Cut the portion of bit string from an integer variable

### Count number of bits
```
17 = 10001
⌊log2(17)⌋ = 4 + 1 = 5 bits
```
```c++
int main() {

    int num = 5; // 101
    int cnt = 0;
    while(num){
        cnt++;
        num >>= 1; /* [ 5/2 = 2/2 = 1/2 = 0 ] */
    }
    cout<<cnt<<" number bits in "<<num<<"\n";
    return 0;
}

//Answer: 3 number bits in 5

Time Complexity: Θ(logn) (Theta of logn)
Auxiliary Space: O(1)
```
###  Count the number of 1s/set-bit in the binary representation
```c++
unsigned int countSetBits(unsigned int n)
{
    unsigned int count = 0;
    while (n) {
        count += n & 1; // if n is odd
        n >>= 1;
    }
    return count;
}

5 = 101
[ 5/2 = 2/2 = 1/2 = 0 ]
[if right first bit always 1 ,this is odd number]
5 odd
2 even
1 odd

OR

cout << __builtin_popcount(4) << endl;
```
### Add two numbers without using arithmetic operators (+, -, ++, –, …?)
```
P(A U B) = P(A) + P(B) - P(A ∩ B)
P(A) + P(B) = P(A U B) + P(A ∩ B)
U = OR(|)
∩ = AND(&)

A = 2,B = 3
P(2) + P(3) = P(2 U 3) + P(2 ∩ 3)
(2 + 3) = (2 | 3) + (2 & 3)
2 = 10, 3 = 11

    10     10
  & 11   | 11
    --     --
    10     11

But, WE use '+' operator

x%2 = result
x/2 = carry
[x  = count total bit]
```
```
[NT : IF per bit 'binary add result' 1 then we can calculate answer]

bit possition : 2^3 2^2 2^1 2^0
initialize : carry = 0, ans = 0

STEP 01 :
  1 1 1 = 7
+ 1 1 0 = 6
 ------
      1
carry = 0, ans = ans ^ 2^0 = 1   

STEP 02:
  1 1 1 = 7
+ 1 1 0 = 6
 ------
    0 1
carry = 1, ans = 1 

STEP 03:
  1 1 1 = 7
+ 1 1 0 = 6
 ------
  1 0 1
carry = 1, ans = ans ^ 2^2 = 5 

STEP 04:
carry = 1 so ans = ans ^ 2^3 = 13  
 
so we can get 7 + 6 = 13
```
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

### Reverse Bits

**[Question](https://www.interviewbit.com/old/problems/reverse-bits/)**
```
Reverse the bits of an 32 bit unsigned integer A.

00000000000000000000000000000011    =>      11000000000000000000000000000000
```
```c++
int main() {
    unsigned int cnt = 0,ans = 0;
    while(A){
        if(A&1)ans+=(1<<(31-cnt));
        A>>=1;
        cnt++;
    }
    cout<<ans<<"\n";
    return 0;
}
```

###  Single Number
```
Input: A = [1, 2, 2, 3, 1]
Output: 3
```
```c++
int Solution::singleNumber(const vector<int> &A) {
    int ans = 0;
    for(int i=0;i<A.size();i++){
        ans^=A[i];
    }
    return ans;
}
```

#### Find Missing And Repeating
https://ideone.com/r4QSHM


- https://www.geeksforgeeks.org/find-xor-of-two-number-without-using-xor-operator/
- https://www.geeksforgeeks.org/calculate-xor-1-n/
- https://www.youtube.com/watch?v=UI94HhwjnFg&list=PLjeQ9Mb66hM0ewIZ50zJKoU8v8Wc-ODTt&ab_channel=BroCoders
- https://www.geeksforgeeks.org/bits-manipulation-important-tactics/
- https://www.educative.io/blog/bit-manipulation-algorithm
- https://leetcode.com/tag/bit-manipulation/
- https://www.interviewbit.com/courses/programming/topics/bit-manipulation/
- https://isaaccomputerscience.org/concepts/data_numbases_bitwise_manipulation?examBoard=all&stage=all
- https://medium.com/techie-delight/bit-manipulation-interview-questions-and-practice-problems-27c0e71412e7
- https://www.albany.edu/faculty/dsaha/teach/2017Spring_CEN360/slides/lec15.pdf
- https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/tutorial/
- https://www.geeksforgeeks.org/count-set-bits-in-an-integer/
- https://www.geeksforgeeks.org/bitwise-operators-in-c-cpp/?ref=lbp
- https://www.geeksforgeeks.org/bits-manipulation-important-tactics/
- https://www.geeksforgeeks.org/must-do-coding-questions-for-product-based-companies/?ref=ghm#BitMasking
- https://www.geeksforgeeks.org/bitwise-algorithms/

### Practice Problem
- [Play With OR](https://practice.geeksforgeeks.org/problems/play-with-or5515/1)
- [Number of 1 Bits](https://practice.geeksforgeeks.org/problems/set-bits0143/1/?category)
- [Sum of two numbers](https://practice.geeksforgeeks.org/problems/sum-of-two-numbers-without-using-arithmetic-operators/1/?track=md-bm)
- [Reverse-Bits](https://www.interviewbit.com/old/problems/reverse-bits/)
- [Single-number](https://www.interviewbit.com/problems/single-number/)
- [Find-Missing-and-Repeating](https://practice.geeksforgeeks.org/problems/find-missing-and-repeating2512/1/#)
