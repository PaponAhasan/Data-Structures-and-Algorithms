```
s1 = "abcde"
s2 = "abcdf"
if(s1 == s2) // 0(n)

n1 = 12
n2 = 1325
if(n1 == n2) // 0(1)

-------------------Intro Hash------------------------------
string ----f(str)[convert]---> number(hash value)

f(str) ---> (hash function)

Hash Function :
* fast
* one to one maping
* unique number or no closusion

-------------------Number System Processes------------------
f("abc") => number system
abc = 1*(26^2)  + 2*(26^1)  + 3*(26^0) = 676 + 52 + 3 = 731

731 % 26 = 3 (c)
28 % 26 = 2 (b)
1 % 26 = 1 (a)
------------------------------------------------------------
when we need ?

s1 = aabcxabbxyzccbabc
s2 = abc
1,14

----------Step 01: Prefix Calculate-------------------------
maping + base

abccda = 123341

prefix :
h0 -> 1     = 1* (10^0) = 1
h1 -> 12    = 1* (10^1) + 2*(10^0) = 12
h2 -> 123
h3 -> 1233
h4 -> 12334
h5 -> 123341

----------Step 02: GetHash-----------------------------------
N = 123341
Find L = 2,R = 4, 334

R-L+1     = 3
12 * 10^3 = 12000

    h4 = 12334
(-) h1 = 12000
    ----------
           334
----------------Step 01: Implementation---------------------------

generatePrefixHash : abc(123)

When i = 0, 
   h[0] = 1

When i = 1,

   h[1] = h[0]*10 = 1*10 = 10
   h[1] = 10 + 2 = 12

When i = 2,

   h[2] = = h[1]*10 = 12*10 = 120
   h[2] = 120 + 3 = 123

----------------Step 02: Implementation---------------------------

getHash : S[L to R]

h[R] - h[L-1] * { BASE^(R-L+1) }
12334 - 12*(10^3)
12334 - 12000 = 334

pw[0] = 1
pw[i] = pw[i-1] * 10

So, h[R] - h[L-1] * pw[R-L+1]
-------------------------------------------------------------------

202206214218227

```
