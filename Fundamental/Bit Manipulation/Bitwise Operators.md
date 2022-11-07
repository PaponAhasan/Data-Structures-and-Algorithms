### Introduction

In computer, all the numbers and all the other data are stored using 2 based number system or in binary format. So, what we use 
to say a '5' in decimal, a computer will represent it as '101', in fact, everything is represented as some sequence of 0s and 1s.
We call this sequence a bit-string.

Bit-wise operations means working with the individual bits other than using the larger or default data types, like integers, 
floating points, characters, or some other complex types.

We do not need to convert the integers to the binary form ourselves, when we use the operators(& or |), they will be automatically 
evaluated. 

Bit-wise operations are quite fast and easy to use,sometimes they reduce the running time of your program heavily, so use bit-wise 
operations when-ever you can.

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

### & (AND) operator
```
0 & 0 = 0
0 & 1 = 0
1 & 0 = 0
1 & 1 = 1

101110111110100 ⇒ 24052
001001101110010 ⇒ 4978
--------------- &
001000101110000 ⇒ 4464
```

### | (OR) operator
```
0 | 0 = 0
0 | 1 = 1
1 | 0 = 1
1 | 1 = 1

101110111110100 ⇒ 24052
001001101110010 ⇒ 4978
--------------- |
101111111110110 ⇒ 24566
```

### ^ (XOR) operator
```
0 ^ 0 = 0
0 ^ 1 = 1
1 ^ 0 = 1
1 ^ 1 = 0
```
```
101110111110100 ⇒ 24052
001001101110010 ⇒ 4978
--------------- ^
100111010000110 ⇒ 20102
```
![image](https://user-images.githubusercontent.com/59710234/158048747-d36df750-5db8-4be8-a58c-c80b5135ef9f.png)

### ~ (NOT) operator
```
This operator is called unary operator.

0000000000001010 ⇒ a(16 bits)
---------------- ~
1111111111110101 ⇒ -11

Surprisingly, the output is -11. But actually this is normal as most of the cases computer represents negative numbers in the 
2's complement form.
```

![image](https://user-images.githubusercontent.com/59710234/165022620-13a3537e-f6ff-4452-8077-f322134332ae.png)

```
2 two's 1 otherwise 0 -> AND
2 two's 0 otherwise 1 -> OR
Same bit 0 otherwise 1 -> X-OR
```

### << (Left Shift) operator
```
This operator only "shift" or moves all the bits to the left. This operator is mostly used if we want to multiply a number by 2, 
or, some powers of 2.
```
```
n = 3
1 << n = 1000
value is 1*(2^n)

64 32 16 8 4 2 1

1 0 1 1 = 11
Afetr left shift 1 0 1 1 0 = 22
After left shift 1 0 1 1 0 0 = 44
we see that left shift it's value is double

1 << 1 = 1*(2^1) ⇒ 2 (10)
1 << 2 = 1*(2^2) ⇒ 4 (100)
1 << 3 = 1*(2^3) ⇒ 8 (1000)
4978 << 8 = 4978 * 2^8  =  00000000000100110111001000000000 ⇒ 1274368
x << y = x*(2^y)
```

```
First Example :
--------------

int a = 4978;
printf("%d\n", a<<1);

4978 * 2 = 9956

0001001101110010 ⇒ a = 4978(16 bit)
---------------- << 1 (SHIFT LEFT the bits by one bit)
0010011011100100 ⇒ 9956

Just move left all the bits by one. The left most bit is lost! and at the rightmost, a zero is added.
```

```
Second Example : Error
---------------

4978 << 8 (4978 shifted left by 8 bits)

0001001101110010 ⇒ 4978 (16 bit representation)
---------------- << 8 (SHIFT LEFT the bits by 8 bit)
0111001000000000 ⇒ 29184

Using 16 bit compiler, 4978 << 8 is 29184, which is incorrect! Some of the left most bits are lost. If we use 32 bits 
data type.

00000000000000000001001101110010 ⇒ 4978(32 bit)
-------------------------------- << 8 (SHIFT LEFT the bits by 8 bit)
00000000000100110111001000000000 ⇒ 1274368

Output of 4978 << 8 is 1274368. (this is actually correct!) . So we told that, this operator depends the length of bit-string.

- The output will be 29184 for 16 bit compiler as Turbo C (16 bits; some bits will be lost)
- The output will be 1274368 for 32 bit compiler as GNU C (32 bits; all bits are reserved since it has bigger capacity)

4978 << 8 = 1274368 (in 32 bits compiler)
4978 * 2^8 = 4978 * 256 = 1274368. (exactly the same)
```

### >> (Right Shift) operator
```
This operator only "shift" or moves all the bits to the right. This operator is mostly used if we want to divide a number by 2, 
or, some powers of 2.
```
```
n = 2
8 >> n = 2
1000 >> n = 10
value is ⌊ 8/(2^n) ⌋

1 0 1 1 = 11 << 1 = 1 0 1 = 5
Afetr right shift 1 0 1  = 5 << 1 = 1 0   = 2
Afetr right shift 1 0    = 2 << 1 = 1     = 1

8 >> 1 = 8/(2^1) = 4 (100)
8 >> 2 = 8/(2^2) = 2 (10)
8 >> 3 = 8/(2^3) = 1 (1)
x >> y = ⌊ x / (2^y) ⌋
```
```
int a = 4978;
printf("%d\n", a>>8);

0001001101110010 ⇒ 4978(16 bit)
---------------- >> 8 (SHIFT RIGHT the bits by 8 bit)
0000000000010011 ⇒ 19

OR

00000000000000000001001101110010 ⇒ 4978(32 bit)
-------------------------------- >> 8 (SHIFT RIGHT the bits by 8 bit)
00000000000000000000000000010011 ⇒ 19

In 16 bits compiler or 32 bits compiler, the >> has no difference, because >> will discard the right most bit, and increased 
capacity on the left side doesn't help here anyhow.

4978 >> 8 = 19 (in 32 bits compiler)
4978 / 2^8 = 4978 / 256 = 19.
```

### Few Words
```
- The two shift operators are generally used with unsigned data type to avoid ambiguity.

- The left shift and right shift operators should not be used for negative numbers (both 1 <<- 1 and 1 >> -1 is undefined)

- If the number is shifted more than the size of the integer, the behaviour is undefined. For example, 1 << 33 is undefined 
   if integers are stored using 32 bits. 
   
- The result of logical operators (&&, || and !) is either 0 or 1, but bitwise operators return an integer value.

- The left-shift and right-shift operators are equivalent to multiplication and division by 2 respectively.

- The & operator can be used to quickly check if a number is odd or even.
```
```
Order precedence :

 NOT ( ~ ) highest
 AND ( & )
 XOR ( ^ )
  OR ( | ) lowest
 
Basic operations (Let X is a single bit) : 

 X & 1 =  X; 1 & 1 = 1 ; 0 & 1 = 0
 X & 0 =  0; 1 & 0 = 0 ; 0 & 0 = 0
 X | 1 =  1; 1 | 1 = 1 ; 0 | 1 = 1
 X | 0 =  X; 1 | 0 = 1 ; 0 | 0 = 0
 X ^ 1 = ~X; 1 ^ 1 = 0 ; 0 ^ 1 = 1
 X ^ 0 =  X; 1 ^ 0 = 1 ; 0 ^ 0 = 0
```
```
Decimal to Binary Convert :

11        odd      1
11/2 = 5  odd      1
5/2 = 2   even     0
2/2 = 1   odd      1
1/2 = 0

So binary(11) = 1101
7 -> (MSB)1101(LSB)

64 32 16 8 4 2 1
13 binary =  8 4 0 1 = 1 1 0 1
```

- [isaaccomputerscience bitwise_manipulation](https://isaaccomputerscience.org/concepts/data_numbases_bitwise_manipulation?examBoard=all&stage=all)
- [albany bitwise_manipulation](https://www.albany.edu/faculty/dsaha/teach/2017Spring_CEN360/slides/lec15.pdf)
