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
![image](https://user-images.githubusercontent.com/59710234/158048747-d36df750-5db8-4be8-a58c-c80b5135ef9f.png)
```
11        odd      1
11/2 = 5  odd      1
5/2 = 2   even     0
2/2 = 1   odd      1
1/2 = 0

So binary(11) = 1101
7 -> (MSB)1101(LSB)
```
![image](https://user-images.githubusercontent.com/59710234/165022620-13a3537e-f6ff-4452-8077-f322134332ae.png)
```
2 two's 1 otherwise 0 -> AND
2 two's 0 otherwise 1 -> OR
Same bit 0 otherwise 1 -> X-OR
```
#### Left Shift
```
n = 3 (left shift)
1 << n = 1000
value is 1*(2^n)

64 32 16 8 4 2 1

1 0 1 1 = 11
Afetr left shift 1 0 1 1 0 = 22
After left shift 1 0 1 1 0 0 = 44
we see that left shift it's value is double

1 = 1(this)
10 << 1    = 1*(2^1) = 2
100 << 2   = 1*(2^2) = 4
1000 << 3  = 1*(2^3) = 8
x << y     = x*(2^y)
```
#### Right Shift
```
n = 2 (right shift)
8(1000) >> n = 10(2) 
value is ⌊ 8/(2^n) ⌋

1 0 1 1 = 11 << 1 = 1 0 1 = 5
Afetr right shift 1 0 1  = 5 << 1 = 1 0   = 2
Afetr right shift 1 0    = 2 << 1 = 1     = 1

1000 = 8 (this)
1000 >> 1 = 8/(2^1) = 4 = 100
1000 >> 2 = 8/(2^2) = 2 = 10
1000 >> 3 = 8/(2^3) = 1 = 1
x >> y = ⌊ x / (2^y) ⌋
```
#### Count number of bits
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
####  Count the number of 1s/set-bit in the binary representation
```c++
unsigned int countSetBits(unsigned int n)
{
    unsigned int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

OR

cout << __builtin_popcount(4) << endl;
```
#### Add two numbers without using arithmetic operators (+, -, ++, –, …?)
```
P(A U B) = P(A) + P(B) - P(A ∩ B)
P(A) + P(B) = P(A U B) + P(A ∩ B)
U = OR(|)
∩ = AND(&)

A = 2,B = 3
P(2) + P(3) = P(2 U 3) + P(2 ∩ 3)
(2 + 3) = (2 | 3) + (2 & 3)
2 = 10, 3 = 11

10    10
11    11
--    --
10    11

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
    int s = a ^ b;
    int carry = a & b;
      
    if (carry == 0) return s;
    else return sum(s, carry << 1);
 }
```

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

### Practice Problem
- [Play With OR](https://practice.geeksforgeeks.org/problems/play-with-or5515/1)
- [Number of 1 Bits](https://practice.geeksforgeeks.org/problems/set-bits0143/1/?category)
- [Sum of two numbers](https://practice.geeksforgeeks.org/problems/sum-of-two-numbers-without-using-arithmetic-operators/1/?track=md-bm)
