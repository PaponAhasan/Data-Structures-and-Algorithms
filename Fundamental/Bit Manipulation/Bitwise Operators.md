```
 6 operators are bitwise operators
 
 1. The & (bitwise AND) : The result of AND is 1 only if both bits are 1, otherwise 0.
 2. The | (bitwise OR) :  The result of OR is 0 if both bits are 0, otherwise 1. 
 3. The ^ (bitwise XOR) : The result of XOR is 1 if the two bits are different(0/1), otherwise 0.
 4. The << (left shift) : Left shifts the bits of the first operand, the second operand decides the number of places to shift. 
 5. The >> (right shift) : Right shifts the bits of the first operand, the second operand decides the number of places to shift. 
 6. The ~ (bitwise NOT) : Takes one number and inverts all bits of it. 
```
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
